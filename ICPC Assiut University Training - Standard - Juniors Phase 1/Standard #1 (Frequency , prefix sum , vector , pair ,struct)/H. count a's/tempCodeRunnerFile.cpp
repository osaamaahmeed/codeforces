
    int l, r; cin >> l >> r;
    if (l == 1) cout << v[r-1] << endl;
    else cout << v[l-1] - v[r-1] << endl;
  }