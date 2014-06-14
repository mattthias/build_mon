#include <QtGui>
#include <QtWebKit/QtWebKit>

int main(int argc, char** argv) {

    QApplication app(argc, argv);

    /* read url from config file (~/.config/mattthias/build_mon.ini) */
    QCoreApplication::setApplicationName("build_mon");
    QCoreApplication::setOrganizationName("mattthias");
    QSettings settings;
    QString url = settings.value("build_mon/url", "http://heise.de").toString();

    QWebView view;
    view.showFullScreen();
    view.setUrl(QUrl(url));
    return app.exec();
}
