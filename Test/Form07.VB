Public Class Form7

   
    Private Sub ListBox1_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListBox1.SelectedIndexChanged
        If ListBox1.SelectedIndex = 0 Then
            ListView2.LargeImageList = ImageList1
            ListView2.View = View.LargeIcon
        ElseIf ListBox1.SelectedIndex = 1 Then
            ListView2.LargeImageList = ImageList1
            ListView2.View = View.SmallIcon
        ElseIf ListBox1.SelectedIndex = 2 Then
            ListView2.View = View.List
            ListView2.LargeImageList = ImageList1
        ElseIf ListBox1.SelectedIndex = 3 Then
            ListView2.LargeImageList = ImageList1
            ListView2.View = View.Details
        End If
    End Sub
    Dim Select_node As Boolean = False

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If Trim(TextBox1.Text) <> "" Then
            TreeView1.Nodes.Add(TextBox1.Text)
        End If
    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        If TreeView1.GetNodeCount(True) > 0 Then
            If Select_node Then
                TreeView1.Nodes.Remove(TreeView1.SelectedNode)
            End If
        Else
            Select_node = False
        End If
    End Sub
    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        End
    End Sub

    Private Sub TreeView1_AfterSelect(ByVal sender As System.Object, ByVal e As System.Windows.Forms.TreeViewEventArgs) Handles TreeView1.AfterSelect
        If Select_node = False Then
            Select_node = True
        End If
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        If TreeView1.GetNodeCount(True) > 0 Then
            If Select_node Then
                TreeView1.SelectedNode.Nodes.Add(TextBox1.Text)
            Else
                Select_node = False
            End If
        End If
    End Sub
End Class
