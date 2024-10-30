
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/WebCommunication.EHTTPWebComFileUpload
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComFileUpload : uint8_t
{
	EHTTPWebComFileUpload__E_gd                                                      = 0,
	EHTTPWebComFileUpload__E_ad                                                      = 1
};

/// Enum /Script/WebCommunication.EHTTPWebComFileBytesToFileActionType
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComFileBytesToFileActionType : uint8_t
{
	EHTTPWebComFileBytesToFileActionType__E_OVERWRITE                                = 0,
	EHTTPWebComFileBytesToFileActionType__E_NOT_OVERWRITE                            = 1
};

/// Enum /Script/WebCommunication.EHTTPWebComFileUploadType
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComFileUploadType : uint8_t
{
	EHTTPWebComFileUploadType__PUT                                                   = 0,
	EHTTPWebComFileUploadType__PUT_STREAM_BLANK                                      = 1,
	EHTTPWebComFileUploadType__PUT_STREAM_COPY                                       = 2,
	EHTTPWebComFileUploadType__PUT_STREAM_MP                                         = 3
};

/// Enum /Script/WebCommunication.EHTTPWebComFileDownloadResumeType
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComFileDownloadResumeType : uint8_t
{
	EHTTPWebComFileDownloadResumeType__E_OVERWRITE                                   = 0,
	EHTTPWebComFileDownloadResumeType__E_NOT_OVERWRITE                               = 1,
	EHTTPWebComFileDownloadResumeType__E_RESUME                                      = 2
};

/// Enum /Script/WebCommunication.EHTTPWebComIndividualType
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComIndividualType : uint8_t
{
	EHTTPWebComIndividualType__STRING                                                = 0,
	EHTTPWebComIndividualType__STREAM                                                = 1
};

/// Enum /Script/WebCommunication.EFileFunctionsWebComDirectoryType
/// Size: 0x01 (1 bytes)
enum class EFileFunctionsWebComDirectoryType : uint8_t
{
	EFileFunctionsWebComDirectoryType__E_gd                                          = 0,
	EFileFunctionsWebComDirectoryType__E_ad                                          = 1
};

/// Enum /Script/WebCommunication.EHTTPWebComRequestType
/// Size: 0x01 (1 bytes)
enum class EHTTPWebComRequestType : uint8_t
{
	EHTTPWebComRequestType__GET                                                      = 0,
	EHTTPWebComRequestType__GETLowRamDownload                                        = 1,
	EHTTPWebComRequestType__PUT                                                      = 2,
	EHTTPWebComRequestType__PUT_STREAM_MP                                            = 3,
	EHTTPWebComRequestType__PUT_STREAM_BLANK                                         = 4,
	EHTTPWebComRequestType__PUT_STREAM_COPY                                          = 5,
	EHTTPWebComRequestType__POST                                                     = 6,
	EHTTPWebComRequestType__POST_UPLOAD                                              = 7,
	EHTTPWebComRequestType__INDIVIDUAL                                               = 8,
	EHTTPWebComRequestType__INDIVIDUAL_STREAM                                        = 9
};

/// Class /Script/WebCommunication.FileFunctionsWebCom
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFileFunctionsWebCom : public UObject
{ 
public:


	/// Functions
	// Function /Script/WebCommunication.FileFunctionsWebCom.writeStringToFile
	// void writeStringToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString data, FString FilePath, bool& success);  // [0x78b2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.writeBytesToFile
	// void writeBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, TArray<char> Bytes, bool& success); // [0x78b100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.stringToBase64String
	// void stringToBase64String(FString String, FString& base64String);                                                        // [0x78ae80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.setTimeStamp
	// void setTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, FDateTime DateTime);                // [0x78ad20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.setReadOnly
	// bool setReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool bNewReadOnlyValue);             // [0x78abb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.readStringFromFile
	// void readStringFromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& data); // [0x78a630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.readBytesFromFile
	// TArray<char> readBytesFromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success);        // [0x78a480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.moveFile
	// bool moveFile(EFileFunctionsWebComDirectoryType directoryTypeTo, FString filePathTo, EFileFunctionsWebComDirectoryType directoryTypeFrom, FString filePathFrom); // [0x78a290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.isReadOnly
	// bool isReadOnly(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                                      // [0x78a0d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.getTimeStamp
	// FDateTime getTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                               // [0x789690] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.getMD5FromFile
	// void getMD5FromFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& MD5);     // [0x789270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.getFilenameOnDisk
	// FString getFilenameOnDisk(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                            // [0x789100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.getCleanDirectory
	// FString getCleanDirectory(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                            // [0x788f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/WebCommunication.FileFunctionsWebCom.getAccessTimeStamp
	// FDateTime getAccessTimeStamp(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                         // [0x788e60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.fileToBase64String
	// void fileToBase64String(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, bool& success, FString& base64String, FString& Filename); // [0x788c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.fileSize
	// int64_t fileSize(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                                     // [0x788b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.fileExists
	// bool fileExists(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                                      // [0x7889d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.directoryExists
	// bool directoryExists(EFileFunctionsWebComDirectoryType DirectoryType, FString Path);                                     // [0x788790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.deleteFile
	// bool deleteFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                                      // [0x788660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.deleteDirectory
	// bool deleteDirectory(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath);                                 // [0x788530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.createDirectory
	// bool createDirectory(EFileFunctionsWebComDirectoryType DirectoryType, FString Path);                                     // [0x788400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.bytesToBase64String
	// void bytesToBase64String(TArray<char> Bytes, FString& base64String);                                                     // [0x7881d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.base64StringToString
	// void base64StringToString(FString& String, FString base64String);                                                        // [0x787e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.base64StringToBytes
	// TArray<char> base64StringToBytes(EFileFunctionsWebComDirectoryType DirectoryType, FString base64String, bool& success);  // [0x787c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.FileFunctionsWebCom.addBytesToFile
	// void addBytesToFile(EFileFunctionsWebComDirectoryType DirectoryType, FString FilePath, TArray<char> Bytes, bool& success); // [0x787910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/WebCommunication.AsyncNodeWebCom
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAsyncNodeWebCom : public UBlueprintAsyncActionBase
{ 
public:
};

/// Class /Script/WebCommunication.AsyncNodeHttpDownloadUpload
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAsyncNodeHttpDownloadUpload : public UAsyncNodeWebCom
{ 
public:
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/WebCommunication.AsyncNodeHttpDownloadUpload.AsyncExecuteHTTP_Upload_PUT_REQUEST
	// class UAsyncNodeHttpDownloadUpload* AsyncExecuteHTTP_Upload_PUT_REQUEST(FString URL, TMap<FString, FString> Header, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, EHTTPWebComFileUploadType uploadType, FString optionalRequestID); // [0x784920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpDownloadUpload.AsyncExecuteHTTP_Upload_POST_REQUEST
	// class UAsyncNodeHttpDownloadUpload* AsyncExecuteHTTP_Upload_POST_REQUEST(FString URL, TMap<FString, FString> Header, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, TMap<FString, FString> POSTData, FString optionalRequestID); // [0x784420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpDownloadUpload.AsyncExecuteHTTP_Low_RAM_Download_REQUEST
	// class UAsyncNodeHttpDownloadUpload* AsyncExecuteHTTP_Low_RAM_Download_REQUEST(FString URL, TMap<FString, FString> Header, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, FString optionalRequestID, int32_t FileSizeStepsInBytes); // [0x783ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpDownloadUpload.AsyncExecuteHTTP_Download_REQUEST
	// class UAsyncNodeHttpDownloadUpload* AsyncExecuteHTTP_Download_REQUEST(FString URL, TMap<FString, FString> Header, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, FString optionalRequestID); // [0x783000] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/WebCommunication.AsyncNodeHttpGoogleFileInfoRequest
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAsyncNodeHttpGoogleFileInfoRequest : public UAsyncNodeWebCom
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/WebCommunication.AsyncNodeHttpGoogleFileInfoRequest.AsyncExecuteHTTP_GoogleFileInfo_REQUEST
	// class UAsyncNodeHttpGoogleFileInfoRequest* AsyncExecuteHTTP_GoogleFileInfo_REQUEST(FString downloadID);                  // [0x7837d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/WebCommunication.AsyncNodeHttpRequest
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAsyncNodeHttpRequest : public UAsyncNodeWebCom
{ 
public:
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/WebCommunication.AsyncNodeHttpRequest.AsyncExecuteHTTP_POST_REQUEST
	// class UAsyncNodeHttpRequest* AsyncExecuteHTTP_POST_REQUEST(FString URL, TMap<FString, FString> Header, TMap<FString, FString> POSTData, FString optionalRequestID); // [0x7840c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpRequest.AsyncExecuteHTTP_Individual_REQUEST
	// class UAsyncNodeHttpRequest* AsyncExecuteHTTP_Individual_REQUEST(FString URL, TMap<FString, FString> Header, FString verb, EHTTPWebComIndividualType contentType, FString content, FString optionalRequestID, bool addContentLengthHeader); // [0x7838c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpRequest.AsyncExecuteHTTP_GoogleDrive_REQUEST
	// class UAsyncNodeHttpRequest* AsyncExecuteHTTP_GoogleDrive_REQUEST(FString downloadID, FString optionalRequestID, int64_t optionalFileSizeInByte); // [0x783620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.AsyncNodeHttpRequest.AsyncExecuteHTTP_GET_REQUEST
	// class UAsyncNodeHttpRequest* AsyncExecuteHTTP_GET_REQUEST(FString URL, TMap<FString, FString> Header, FString optionalRequestID); // [0x7833a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/WebCommunication.WebCommunicationBPLibrary
/// Size: 0x01C0 (448 bytes) (0x000028 - 0x0001C0) align 8 MaxSize: 0x01C0
class UWebCommunicationBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(onhttpRequestCompleteDelegate);                      // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(onhttpRequestCompleteGoogleInfoDelegate);            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(onhttpFileDownloadDelegate);                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(onhttpFileUploadDelegate);                           // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x158];                                     // 0x0068   (0x0158)  MISSED


	/// Functions
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.urlEncodePure
	// FString urlEncodePure(FString urlParameter);                                                                             // [0x78afd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.urlEncode
	// FString urlEncode(FString urlParameter);                                                                                 // [0x78afd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.searchUploadLeftovers
	// void searchUploadLeftovers(EHTTPWebComFileUpload DirectoryType, FString FilePath, bool& foundLeftovers, int64_t& originalFileSize); // [0x78aa00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.repairFileAfterUpload
	// bool repairFileAfterUpload(EHTTPWebComFileUpload DirectoryType, FString FilePath);                                       // [0x78a8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.removePersistentHTTPRequestHeader
	// void removePersistentHTTPRequestHeader(FString ID);                                                                      // [0x78a7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.megabyteToByte
	// int32_t megabyteToByte(int32_t mb);                                                                                      // [0x78a200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpRequestCompleteGoogleInfoDelegate__DelegateSignature
	// void httpRequestCompleteGoogleInfoDelegate__DelegateSignature(FString Filename, int64_t fileSizeInBytes, int32_t statusCode, FString downloadID, FString requestID); // [0xfa36a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpRequestCompleteGoogleInfoDelegate
	// void httpRequestCompleteGoogleInfoDelegate(FString Filename, int64_t fileSizeInBytes, int32_t statusCode, FString downloadID, FString requestID); // [0x789e40] Final|Native|Public  
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpRequestCompleteDelegate__DelegateSignature
	// void httpRequestCompleteDelegate__DelegateSignature(TArray<FString>& data, TArray<FString>& Header, int32_t statusCode, TArray<char>& byteData, FString requestID); // [0xfa36a0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpRequestCompleteDelegate
	// void httpRequestCompleteDelegate(TArray<FString>& data, TArray<FString>& Header, int32_t statusCode, TArray<char>& byteData, FString requestID); // [0x789ba0] Final|Native|Public|HasOutParms 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpFileUploadDelegate__DelegateSignature
	// void httpFileUploadDelegate__DelegateSignature(float Size, int32_t bytesSent, float percentUpload, FString requestID);   // [0xfa36a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpFileUploadDelegate
	// void httpFileUploadDelegate(float Size, int32_t bytesSent, float percentUpload, FString requestID);                      // [0x7899f0] Final|Native|Public  
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpFileProgressDelegate__DelegateSignature
	// void httpFileProgressDelegate__DelegateSignature(float Size, int32_t bytesSent, float percentUpload, int32_t bytesReceived, float percentDownload); // [0xfa36a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpFileDownloadDelegate__DelegateSignature
	// void httpFileDownloadDelegate__DelegateSignature(float Size, float megaBytesReceived, float percentDownload, float megaBit, FString requestID); // [0xfa36a0] MulticastDelegate|Public|Delegate 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.httpFileDownloadDelegate
	// void httpFileDownloadDelegate(float Size, float megaBytesReceived, float percentDownload, float megaBit, FString requestID); // [0x7897f0] Final|Native|Public  
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.getWebCommunicationTarget
	// class UWebCommunicationBPLibrary* getWebCommunicationTarget();                                                           // [0x7897c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.getMimeTypeMap
	// TMap<FString, FString> getMimeTypeMap();                                                                                 // [0x7895f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.getMimeTypeByFile
	// void getMimeTypeByFile(EHTTPWebComFileUpload DirectoryType, FString FilePath, FString& mimeType, bool& success);         // [0x789430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.executeHttpRequests
	// void executeHttpRequests(TArray<FhttpRequest> httpRequests, class UWebCommunicationBPLibrary*& WebCommunicationTarget);  // [0x7888c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestPOST
	// void CreateHttpRequestPOST(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, TMap<FString, FString> POSTData, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x787440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestIndividual
	// void CreateHttpRequestIndividual(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, FString verb, EHTTPWebComIndividualType contentType, FString content, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID, bool addContentLengthHeader); // [0x786ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestGoogleDriveFileInfo
	// void CreateHttpRequestGoogleDriveFileInfo(TArray<FhttpRequest> otherHttpRequests, FString downloadID, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x786c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestGoogleDrive
	// void CreateHttpRequestGoogleDrive(TArray<FhttpRequest> otherHttpRequests, FString downloadID, FString optionalRequestID, int64_t optionalFileSizeInByte, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x786950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestGETLowRamDownload
	// void CreateHttpRequestGETLowRamDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, int32_t FileSizeStepsInBytes, FString optionalRequestID); // [0x786430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestGETDownload
	// void CreateHttpRequestGETDownload(TArray<FhttpRequest>& httpRequests, FString& requestID, TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, EHTTPWebComFileDownloadResumeType ActionIfFileExists, EHTTPWebComFileUpload DirectoryType, FString filePathWithFileName, FString optionalRequestID); // [0x785f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestGET
	// void CreateHttpRequestGET(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x785ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestFileUploadPUT
	// void CreateHttpRequestFileUploadPUT(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, EHTTPWebComFileUploadType uploadType, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x785630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestFileUploadPOST
	// void CreateHttpRequestFileUploadPOST(TArray<FhttpRequest> otherHttpRequests, FString URL, TMap<FString, FString> Header, EHTTPWebComFileUpload DirectoryType, FString FilePath, FString fileID, TMap<FString, FString> POSTData, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x784fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.CreateHttpRequestAnonfiles
	// void CreateHttpRequestAnonfiles(TArray<FhttpRequest> otherHttpRequests, FString URL, FString optionalRequestID, TArray<FhttpRequest>& httpRequests, FString& requestID); // [0x784d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.cancelRequest
	// void cancelRequest(FString requestID);                                                                                   // [0x788310] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.byteToMegabyte
	// float byteToMegabyte(int32_t byte);                                                                                      // [0x788140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.byteDataToFile
	// void byteDataToFile(EHTTPWebComFileBytesToFileActionType fileAction, TArray<char> byteData, EHTTPWebComFileUpload DirectoryType, FString FilePath); // [0x787f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WebCommunication.WebCommunicationBPLibrary.addPersistentHTTPRequestHeader
	// void addPersistentHTTPRequestHeader(FString ID, FString Value);                                                          // [0x787b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/WebCommunication.WebCommunicationRequestCompleteObject
/// Size: 0x01B8 (440 bytes) (0x000028 - 0x0001B8) align 8 MaxSize: 0x01B8
class UWebCommunicationRequestCompleteObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x190];                                     // 0x0028   (0x0190)  MISSED
};

/// Struct /Script/WebCommunication.httpRequest
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FhttpRequest
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFileFunctionsWebCom) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAsyncNodeWebCom) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAsyncNodeHttpDownloadUpload) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UAsyncNodeHttpGoogleFileInfoRequest) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UAsyncNodeHttpRequest) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UWebCommunicationBPLibrary) == 0x01C0); // 448 bytes (0x000028 - 0x0001C0)
static_assert(sizeof(UWebCommunicationRequestCompleteObject) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(FhttpRequest) == 0x0108); // 264 bytes (0x000000 - 0x000108)
