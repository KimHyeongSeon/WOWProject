Public Class Form8

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If TextBox1.Text.Trim <> "" Then
            If RadioButton1.Checked = True Then
                ListBox1.Items.Add(TextBox1.Text)
            ElseIf RadioButton2.Checked = True Then
                ListBox2.Items.Add(TextBox1.Text)
            End If
            TextBox1.Text = ""
            TextBox1.Focus()
        End If
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        Dim i, j As Integer
        If ListBox1.SelectedIndex <> -1 Then
            For i = ListBox1.Items.Count - 1 To 0 Step -1
                If ListBox1.GetSelected(i) = True Then
                    ListBox1.Items.Remove(ListBox1.SelectedItem)
                End If
            Next i
        End If
        If ListBox2.SelectedIndex <> -1 Then
            For j = ListBox2.Items.Count - 1 To 0 Step -1
                If ListBox2.GetSelected(j) = True Then
                    ListBox2.Items.Remove(ListBox2.SelectedItem)
                End If
            Next j
        End If
    End Sub
End Class
