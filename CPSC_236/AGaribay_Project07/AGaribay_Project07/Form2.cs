using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AGaribay_Project07
{
    public partial class Form2 : Form
    {
        Form1 form1Ref;
        public Form2(Form1 form1)
        {
            InitializeComponent();

            this.form1Ref = form1;

        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close(); 
        }

        private void Form2_FormClosing(object sender, FormClosingEventArgs e)
        {
            
        }
    }
}
