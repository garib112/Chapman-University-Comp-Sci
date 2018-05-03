namespace Agaribay_Project08
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
            this.EncodeButton = new System.Windows.Forms.Button();
            this.WriteImageButton = new System.Windows.Forms.Button();
            this.FindTextButton = new System.Windows.Forms.Button();
            this.DecodeTextButton = new System.Windows.Forms.Button();
            this.TextBoxFound = new System.Windows.Forms.RichTextBox();
            this.TextBoxAdd = new System.Windows.Forms.RichTextBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.OpenImageButton = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // EncodeButton
            // 
            this.EncodeButton.Location = new System.Drawing.Point(41, 173);
            this.EncodeButton.Name = "EncodeButton";
            this.EncodeButton.Size = new System.Drawing.Size(367, 42);
            this.EncodeButton.TabIndex = 2;
            this.EncodeButton.Text = "Encode Text";
            this.EncodeButton.UseVisualStyleBackColor = true;
            this.EncodeButton.Click += new System.EventHandler(this.EncodeButton_Click);
            // 
            // WriteImageButton
            // 
            this.WriteImageButton.Location = new System.Drawing.Point(41, 223);
            this.WriteImageButton.Name = "WriteImageButton";
            this.WriteImageButton.Size = new System.Drawing.Size(367, 50);
            this.WriteImageButton.TabIndex = 3;
            this.WriteImageButton.Text = "Write to Image";
            this.WriteImageButton.UseVisualStyleBackColor = true;
            this.WriteImageButton.Click += new System.EventHandler(this.WriteImageButton_Click);
            // 
            // FindTextButton
            // 
            this.FindTextButton.Location = new System.Drawing.Point(41, 310);
            this.FindTextButton.Name = "FindTextButton";
            this.FindTextButton.Size = new System.Drawing.Size(367, 40);
            this.FindTextButton.TabIndex = 4;
            this.FindTextButton.Text = "Find Text";
            this.FindTextButton.UseVisualStyleBackColor = true;
            this.FindTextButton.Click += new System.EventHandler(this.FindTextButton_Click);
            // 
            // DecodeTextButton
            // 
            this.DecodeTextButton.Location = new System.Drawing.Point(41, 366);
            this.DecodeTextButton.Name = "DecodeTextButton";
            this.DecodeTextButton.Size = new System.Drawing.Size(367, 41);
            this.DecodeTextButton.TabIndex = 5;
            this.DecodeTextButton.Text = "Decode Text";
            this.DecodeTextButton.UseVisualStyleBackColor = true;
            this.DecodeTextButton.Click += new System.EventHandler(this.DecodeTextButton_Click);
            // 
            // TextBoxFound
            // 
            this.TextBoxFound.Location = new System.Drawing.Point(41, 436);
            this.TextBoxFound.Name = "TextBoxFound";
            this.TextBoxFound.Size = new System.Drawing.Size(367, 136);
            this.TextBoxFound.TabIndex = 6;
            this.TextBoxFound.Text = "";
            // 
            // TextBoxAdd
            // 
            this.TextBoxAdd.Location = new System.Drawing.Point(41, 52);
            this.TextBoxAdd.Name = "TextBoxAdd";
            this.TextBoxAdd.Size = new System.Drawing.Size(367, 115);
            this.TextBoxAdd.TabIndex = 1;
            this.TextBoxAdd.Text = "";
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.pictureBox1.InitialImage = null;
            this.pictureBox1.Location = new System.Drawing.Point(433, 26);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(447, 451);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 6;
            this.pictureBox1.TabStop = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(41, 410);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(154, 20);
            this.label1.TabIndex = 7;
            this.label1.Text = "Text Found in Image";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(41, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(157, 20);
            this.label2.TabIndex = 8;
            this.label2.Text = "Text to Add to Image";
            // 
            // OpenImageButton
            // 
            this.OpenImageButton.Location = new System.Drawing.Point(433, 509);
            this.OpenImageButton.Name = "OpenImageButton";
            this.OpenImageButton.Size = new System.Drawing.Size(126, 63);
            this.OpenImageButton.TabIndex = 7;
            this.OpenImageButton.Text = "Open Image...";
            this.OpenImageButton.UseVisualStyleBackColor = true;
            this.OpenImageButton.Click += new System.EventHandler(this.OpenImageButton_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(41, 276);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(351, 20);
            this.label3.TabIndex = 10;
            this.label3.Text = "______________________________________";
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // Form1
            // 
            this.AllowDrop = true;
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Info;
            this.ClientSize = new System.Drawing.Size(905, 610);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.OpenImageButton);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.TextBoxAdd);
            this.Controls.Add(this.TextBoxFound);
            this.Controls.Add(this.DecodeTextButton);
            this.Controls.Add(this.FindTextButton);
            this.Controls.Add(this.WriteImageButton);
            this.Controls.Add(this.EncodeButton);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Stenography";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button EncodeButton;
        private System.Windows.Forms.Button WriteImageButton;
        private System.Windows.Forms.Button FindTextButton;
        private System.Windows.Forms.Button DecodeTextButton;
        private System.Windows.Forms.RichTextBox TextBoxFound;
        private System.Windows.Forms.RichTextBox TextBoxAdd;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button OpenImageButton;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
    }
}

