// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_FILECLOSE_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_FILECLOSE_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct FileCloseRequest;

struct FileCloseResponse;

struct FileCloseRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  int32_t id() const { return GetField<int32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct FileCloseRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) { fbb_.AddElement<int32_t>(FileCloseRequest::VT_ID, id, 0); }
  FileCloseRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FileCloseRequestBuilder &operator=(const FileCloseRequestBuilder &);
  flatbuffers::Offset<FileCloseRequest> Finish() {
    auto o = flatbuffers::Offset<FileCloseRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<FileCloseRequest> CreateFileCloseRequest(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0) {
  FileCloseRequestBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

struct FileCloseResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           verifier.EndTable();
  }
};

struct FileCloseResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(FileCloseResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(FileCloseResponse::VT_ERROR_MSG, error_msg); }
  FileCloseResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FileCloseResponseBuilder &operator=(const FileCloseResponseBuilder &);
  flatbuffers::Offset<FileCloseResponse> Finish() {
    auto o = flatbuffers::Offset<FileCloseResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<FileCloseResponse> CreateFileCloseResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0) {
  FileCloseResponseBuilder builder_(_fbb);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileCloseResponse> CreateFileCloseResponseDirect(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr) {
  return CreateFileCloseResponse(_fbb, success, error_msg ? _fbb.CreateString(error_msg) : 0);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_FILECLOSE_MBTOOL_DAEMON_V3_H_
