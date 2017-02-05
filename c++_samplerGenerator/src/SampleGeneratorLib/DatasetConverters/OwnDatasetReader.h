//
// Created by frivas on 22/01/17.
//

#ifndef SAMPLERGENERATOR_OWNDATASETREADER_H
#define SAMPLERGENERATOR_OWNDATASETREADER_H

#include "DatasetReader.h"

class OwnDatasetReader:public DatasetReader {
public:
    OwnDatasetReader(const std::string& path);
    OwnDatasetReader();
    bool appendDataset(const std::string& datasetPath, const std::string& datasetPrefix="");
private:

};


typedef boost::shared_ptr<OwnDatasetReader> OwnDatasetReaderPtr;


#endif //SAMPLERGENERATOR_OWNDATASETREADER_H
