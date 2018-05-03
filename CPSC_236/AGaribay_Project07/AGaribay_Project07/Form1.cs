using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Net.NetworkInformation;
using System.Windows.Forms.DataVisualization.Charting;

namespace AGaribay_Project07

{
    public partial class Form1 : Form
    {

        Form2 form2;
        BindingList<string> addressList = new BindingList<string>();
        //timer.Elapsed += HandleTimer;
        public Form1()
        {
            InitializeComponent();
            this.form2 = new Form2(this);

            addressListbox.DataSource = addressList;
            addressListbox.DisplayMember = "displayWebadress";

            loadRecords();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            saveRecords();
        }

        private void addURL_Click(object sender, EventArgs e)
        {
            addressList.Add(textBox2.Text);
            textBox2.Text = "";
        }

        private void removeSelected_Click(object sender, EventArgs e)
        {
            addressList.RemoveAt(addressListbox.SelectedIndex);
        }

        private void loadRecords()
        {
            using (StreamReader reader = new StreamReader("Project04_URLs.csv"))
            {

                while (!reader.EndOfStream)
                {
                    string line = reader.ReadLine();

                    // If the line isn't blank, do something with it
                    if (line != null)
                    {
                        addressList.Add(line);
                    }

                }

                reader.Close();
            }
        }

        private void saveRecords()
        {
            // TODO: Implement saveRecords()
            using (StreamWriter writer = new StreamWriter(@"Project04_URLs.csv"))
            {
                foreach (string address in addressList)
                {
                    writer.Write(address + Environment.NewLine);
                }
                writer.Close();
            }
        }
        

        private void pingAllOnce_Click(object sender, EventArgs e)
        {
            //chart1.Series[0].Points.Clear();
            //chart1.Series[0].Label = null;
            //chart1.Series[0].Points.Add(new DataPoint(1, 3));
            //chart1.Series[0].LegendText = "Test";
            chart1.Series.Add(new Series("Google"));
            chart1.Series["Google"].Label = "Google";
            chart1.Series["Google"].Points.Add(new DataPoint(1, 5));
        }

        private void pingSelectedOnce_Click(object sender, EventArgs e)
        {
            while(chart1.Series.Count > 0)
            {
                chart1.Series.RemoveAt(0);
            }

            float[] pingArray = new float[1];

            if(addressListbox.SelectedIndex > -1)
            {
                float WebPings = PingApplication(addressList.Text.ToString());
                MessageBox.Show(WebPings.ToString());
            }
        }

        private void setting_Click(object sender, EventArgs e)
        {
            form2.ShowDialog();
        }

        private static string PingApplication(string web_ping)
        {
            string resultReturn;
            float rtTime = 0;
            Ping PingApplication = new Ping();

            try
            {
                Ping webPing = new Ping();
                PingReply reply = webPing.Send(web_ping);

                if (reply.Status == IPStatus.Success)
                {
                    rtTime = reply.RoundtripTime;
                    resultReturn = rtTime.ToString();
                    
                }
                else
                {
                    MessageBox.Show(resultReturn = "An Error Occurred");

                }
            }
            catch(Exception e)
            {
                MessageBox.Show(resultReturn = web_ping + " " + e.Message);
            }
            
                  
            return resultReturn;
        }

        private void AddToChart(DataPointCollection points, float[] pointsArr)
        {
            for (int i = 0; i < pointsArr.Length; i++)
            {
                points.Add(new DataPoint(i + 1, pointsArr[i]));
            }
        }

        private void chart1_Click(object sender, EventArgs e)
        {

        }
    }
}

class Websites : INotifyPropertyChanged
{
    public string webAdress;
    public string displayWebAdress
    {
        get
        {
            return webAdress;
        }

        set
        {
            webAdress = value;
            RaisePropertyChanged("webAddress");
        }
    }

    private void RaisePropertyChanged(string v)
    {
        var temp = PropertyChanged;
        if (temp != null)
        {
            temp(this, new PropertyChangedEventArgs(v));
        }
    }

    public event PropertyChangedEventHandler PropertyChanged;

    public Websites(string webAdress)
    {
        this.webAdress = webAdress;

    }
}
