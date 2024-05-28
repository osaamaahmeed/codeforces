while (q--) {
    int l,r; cin >> l >> r;

    if (l == 1) cout << vec.at(r);
    else cout << vec[r] - vec[l];
  }