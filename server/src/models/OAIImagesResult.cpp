/**
 * Scraper
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIImagesResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIImagesResult::OAIImagesResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIImagesResult::OAIImagesResult() {
    this->initializeModel();
}

OAIImagesResult::~OAIImagesResult() {}

void OAIImagesResult::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_system_isSet = false;
    m_system_isValid = false;

    m_images_isSet = false;
    m_images_isValid = false;
}

void OAIImagesResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImagesResult::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_system_isValid = ::OpenAPI::fromJsonValue(system, json[QString("system")]);
    m_system_isSet = !json[QString("system")].isNull() && m_system_isValid;

    m_images_isValid = ::OpenAPI::fromJsonValue(images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;
}

QString OAIImagesResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImagesResult::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_system_isSet) {
        obj.insert(QString("system"), ::OpenAPI::toJsonValue(system));
    }
    if (images.isSet()) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(images));
    }
    return obj;
}

QString OAIImagesResult::getName() const {
    return name;
}
void OAIImagesResult::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIImagesResult::is_name_Set() const{
    return m_name_isSet;
}

bool OAIImagesResult::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIImagesResult::getSystem() const {
    return system;
}
void OAIImagesResult::setSystem(const QString &system) {
    this->system = system;
    this->m_system_isSet = true;
}

bool OAIImagesResult::is_system_Set() const{
    return m_system_isSet;
}

bool OAIImagesResult::is_system_Valid() const{
    return m_system_isValid;
}

OAIImagesResult_images OAIImagesResult::getImages() const {
    return images;
}
void OAIImagesResult::setImages(const OAIImagesResult_images &images) {
    this->images = images;
    this->m_images_isSet = true;
}

bool OAIImagesResult::is_images_Set() const{
    return m_images_isSet;
}

bool OAIImagesResult::is_images_Valid() const{
    return m_images_isValid;
}

bool OAIImagesResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (images.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIImagesResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace OpenAPI