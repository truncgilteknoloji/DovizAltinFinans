using (var webClient = new System.Net.WebClient()) {
    var json = webClient.DownloadString("http://finans.truncgil.com/today.json");
}
