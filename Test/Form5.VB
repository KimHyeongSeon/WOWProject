Public Class Form1

    Private Sub 글꼴선택ToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles 글꼴선택ToolStripMenuItem.Click
        FontDialog1.ShowColor = True
        If FontDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            TextBox1.Font = FontDialog1.Font
            TextBox1.ForeColor = ColorDialog1.Color
        End If

    End Sub

    Private Sub 색상선택CToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles 색상선택CToolStripMenuItem.Click
        If ColorDialog1.ShowDialog = Windows.Forms.DialogResult.OK Then
            TextBox1.ForeColor = ColorDialog1.Color

        End If
    End Sub

    Private Sub 덧셈ToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles 덧셈ToolStripMenuItem.Click
        TextBox4.Text = TextBox2.Text & " + " & TextBox3.Text & " = " & Val(TextBox2.Text) + Val(TextBox3.Text)
    End Sub

    Private Sub 종료EToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles 종료EToolStripMenuItem.Click
        End
    End Sub
End Class
