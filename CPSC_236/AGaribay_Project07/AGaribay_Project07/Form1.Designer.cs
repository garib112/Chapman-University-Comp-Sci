namespace AGaribay_Project07
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.addURL = new System.Windows.Forms.Button();
            this.removeSelected = new System.Windows.Forms.Button();
            this.pingAllOnce = new System.Windows.Forms.Button();
            this.pingAllX = new System.Windows.Forms.Button();
            this.pingSelectedOnce = new System.Windows.Forms.Button();
            this.pingSelectedX = new System.Windows.Forms.Button();
            this.numOfpings = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.setting = new System.Windows.Forms.Button();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.addressListbox = new System.Windows.Forms.ListBox();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(29, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(85, 20);
            this.label1.TabIndex = 1;
            this.label1.Text = "Addresses";
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(33, 217);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(278, 26);
            this.textBox2.TabIndex = 2;
            // 
            // addURL
            // 
            this.addURL.Location = new System.Drawing.Point(33, 249);
            this.addURL.Name = "addURL";
            this.addURL.Size = new System.Drawing.Size(113, 35);
            this.addURL.TabIndex = 3;
            this.addURL.Text = "Add URL";
            this.addURL.UseVisualStyleBackColor = true;
            this.addURL.Click += new System.EventHandler(this.addURL_Click);
            // 
            // removeSelected
            // 
            this.removeSelected.Location = new System.Drawing.Point(33, 299);
            this.removeSelected.Name = "removeSelected";
            this.removeSelected.Size = new System.Drawing.Size(157, 32);
            this.removeSelected.TabIndex = 4;
            this.removeSelected.Text = "Remove Selected";
            this.removeSelected.UseVisualStyleBackColor = true;
            this.removeSelected.Click += new System.EventHandler(this.removeSelected_Click);
            // 
            // pingAllOnce
            // 
            this.pingAllOnce.Location = new System.Drawing.Point(33, 349);
            this.pingAllOnce.Name = "pingAllOnce";
            this.pingAllOnce.Size = new System.Drawing.Size(210, 35);
            this.pingAllOnce.TabIndex = 5;
            this.pingAllOnce.Text = "Ping All (1)";
            this.pingAllOnce.UseVisualStyleBackColor = true;
            this.pingAllOnce.Click += new System.EventHandler(this.pingAllOnce_Click);
            // 
            // pingAllX
            // 
            this.pingAllX.Location = new System.Drawing.Point(33, 390);
            this.pingAllX.Name = "pingAllX";
            this.pingAllX.Size = new System.Drawing.Size(210, 34);
            this.pingAllX.TabIndex = 6;
            this.pingAllX.Text = "Ping All (x)";
            this.pingAllX.UseVisualStyleBackColor = true;
            // 
            // pingSelectedOnce
            // 
            this.pingSelectedOnce.Location = new System.Drawing.Point(33, 439);
            this.pingSelectedOnce.Name = "pingSelectedOnce";
            this.pingSelectedOnce.Size = new System.Drawing.Size(210, 32);
            this.pingSelectedOnce.TabIndex = 7;
            this.pingSelectedOnce.Text = "Ping Selected (1)";
            this.pingSelectedOnce.UseVisualStyleBackColor = true;
            this.pingSelectedOnce.Click += new System.EventHandler(this.pingSelectedOnce_Click);
            // 
            // pingSelectedX
            // 
            this.pingSelectedX.Location = new System.Drawing.Point(33, 477);
            this.pingSelectedX.Name = "pingSelectedX";
            this.pingSelectedX.Size = new System.Drawing.Size(210, 30);
            this.pingSelectedX.TabIndex = 8;
            this.pingSelectedX.Text = "Ping Selected (x)";
            this.pingSelectedX.UseVisualStyleBackColor = true;
            // 
            // numOfpings
            // 
            this.numOfpings.Location = new System.Drawing.Point(33, 548);
            this.numOfpings.Name = "numOfpings";
            this.numOfpings.Size = new System.Drawing.Size(70, 26);
            this.numOfpings.TabIndex = 9;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(34, 521);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(126, 20);
            this.label2.TabIndex = 10;
            this.label2.Text = "Number of Pings";
            // 
            // setting
            // 
            this.setting.Location = new System.Drawing.Point(219, 574);
            this.setting.Name = "setting";
            this.setting.Size = new System.Drawing.Size(131, 32);
            this.setting.TabIndex = 11;
            this.setting.Text = "Settings";
            this.setting.UseVisualStyleBackColor = true;
            this.setting.Click += new System.EventHandler(this.setting_Click);
            // 
            // chart1
            // 
            chartArea1.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chart1.Legends.Add(legend1);
            this.chart1.Location = new System.Drawing.Point(355, 35);
            this.chart1.Name = "chart1";
            series1.ChartArea = "ChartArea1";
            series1.Legend = "Legend1";
            series1.Name = "Series1";
            this.chart1.Series.Add(series1);
            this.chart1.Size = new System.Drawing.Size(709, 527);
            this.chart1.TabIndex = 12;
            this.chart1.Text = " ";
            this.chart1.Click += new System.EventHandler(this.chart1_Click);
            // 
            // addressListbox
            // 
            this.addressListbox.FormattingEnabled = true;
            this.addressListbox.ItemHeight = 20;
            this.addressListbox.Location = new System.Drawing.Point(33, 35);
            this.addressListbox.Name = "addressListbox";
            this.addressListbox.Size = new System.Drawing.Size(278, 164);
            this.addressListbox.TabIndex = 13;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1107, 621);
            this.Controls.Add(this.addressListbox);
            this.Controls.Add(this.chart1);
            this.Controls.Add(this.setting);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.numOfpings);
            this.Controls.Add(this.pingSelectedX);
            this.Controls.Add(this.pingSelectedOnce);
            this.Controls.Add(this.pingAllX);
            this.Controls.Add(this.pingAllOnce);
            this.Controls.Add(this.removeSelected);
            this.Controls.Add(this.addURL);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Form1";
            this.Text = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Button addURL;
        private System.Windows.Forms.Button removeSelected;
        private System.Windows.Forms.Button pingAllOnce;
        private System.Windows.Forms.Button pingAllX;
        private System.Windows.Forms.Button pingSelectedOnce;
        private System.Windows.Forms.Button pingSelectedX;
        private System.Windows.Forms.TextBox numOfpings;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button setting;
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.ListBox addressListbox;
    }
}

