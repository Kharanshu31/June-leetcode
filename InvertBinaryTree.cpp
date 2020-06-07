void mirror(TreeNode *p)
    {
        if(p==NULL)
            return;
         if(p->left!= NULL || p->right!=NULL)
        {
            TreeNode* temp=p->left;
            p->left=p->right;
            p->right=temp;
        }
        
        mirror(p->left);
        mirror(p->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
      mirror(root);
      return root;
    }
