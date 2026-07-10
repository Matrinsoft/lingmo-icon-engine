#include <QIconEnginePlugin>

namespace {

class LingmoIconEnginePlugin : public QIconEnginePlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QIconEngineFactoryInterface" FILE "lingmo-iconengine.json")
public:
    // Icon engine implementation will be added here
};

} // namespace

#include "main.moc"
