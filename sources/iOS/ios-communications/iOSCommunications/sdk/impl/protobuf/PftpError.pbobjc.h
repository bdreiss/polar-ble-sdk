// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pftp_error.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "google/GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum PbPFtpError

/**
 *
 * Error codes.
 **/
typedef GPB_ENUM(PbPFtpError) {
  /** Succeeding or no error */
  PbPFtpError_OperationSucceeded = 0,
  PbPFtpError_Rebooting = 1,
  PbPFtpError_TryAgain = 2,

  /** Host errors */
  PbPFtpError_UnidentifiedHostError = 100,
  PbPFtpError_InvalidCommand = 101,
  PbPFtpError_InvalidParameter = 102,
  PbPFtpError_NoSuchFileOrDirectory = 103,
  PbPFtpError_DirectoryExists = 104,
  PbPFtpError_FileExists = 105,
  PbPFtpError_OperationNotPermitted = 106,
  PbPFtpError_NoSuchUser = 107,
  PbPFtpError_Timeout = 108,

  /** Device errors */
  PbPFtpError_UnidentifiedDeviceError = 200,
  PbPFtpError_NotImplemented = 201,
  PbPFtpError_SystemBusy = 202,
  PbPFtpError_InvalidContent = 203,
  PbPFtpError_ChecksumFailure = 204,
  PbPFtpError_DiskFull = 205,
  PbPFtpError_PrerequisiteNotMet = 206,
  PbPFtpError_InsufficientBuffer = 207,
  PbPFtpError_WaitForIdling = 208,

  /** 300-399 reserved for communication interface specific errors */
  PbPFtpError_BatteryTooLow = 209,
};

GPBEnumDescriptor *PbPFtpError_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL PbPFtpError_IsValidValue(int32_t value);

#pragma mark - PftpErrorRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface PftpErrorRoot : GPBRootObject
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
