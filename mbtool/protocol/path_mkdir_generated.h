// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PATHMKDIR_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHMKDIR_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct PathMkdirRequest;

struct PathMkdirResponse;

struct PathMkdirRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PATH = 4,
    VT_MODE = 6,
    VT_RECURSIVE = 8
  };
  const flatbuffers::String *path() const { return GetPointer<const flatbuffers::String *>(VT_PATH); }
  uint32_t mode() const { return GetField<uint32_t>(VT_MODE, 0); }
  bool recursive() const { return GetField<uint8_t>(VT_RECURSIVE, 0) != 0; }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PATH) &&
           verifier.Verify(path()) &&
           VerifyField<uint32_t>(verifier, VT_MODE) &&
           VerifyField<uint8_t>(verifier, VT_RECURSIVE) &&
           verifier.EndTable();
  }
};

struct PathMkdirRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) { fbb_.AddOffset(PathMkdirRequest::VT_PATH, path); }
  void add_mode(uint32_t mode) { fbb_.AddElement<uint32_t>(PathMkdirRequest::VT_MODE, mode, 0); }
  void add_recursive(bool recursive) { fbb_.AddElement<uint8_t>(PathMkdirRequest::VT_RECURSIVE, static_cast<uint8_t>(recursive), 0); }
  PathMkdirRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathMkdirRequestBuilder &operator=(const PathMkdirRequestBuilder &);
  flatbuffers::Offset<PathMkdirRequest> Finish() {
    auto o = flatbuffers::Offset<PathMkdirRequest>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<PathMkdirRequest> CreatePathMkdirRequest(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    uint32_t mode = 0,
    bool recursive = false) {
  PathMkdirRequestBuilder builder_(_fbb);
  builder_.add_mode(mode);
  builder_.add_path(path);
  builder_.add_recursive(recursive);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathMkdirRequest> CreatePathMkdirRequestDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const char *path = nullptr,
    uint32_t mode = 0,
    bool recursive = false) {
  return CreatePathMkdirRequest(_fbb, path ? _fbb.CreateString(path) : 0, mode, recursive);
}

struct PathMkdirResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
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

struct PathMkdirResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(PathMkdirResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(PathMkdirResponse::VT_ERROR_MSG, error_msg); }
  PathMkdirResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathMkdirResponseBuilder &operator=(const PathMkdirResponseBuilder &);
  flatbuffers::Offset<PathMkdirResponse> Finish() {
    auto o = flatbuffers::Offset<PathMkdirResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathMkdirResponse> CreatePathMkdirResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0) {
  PathMkdirResponseBuilder builder_(_fbb);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathMkdirResponse> CreatePathMkdirResponseDirect(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr) {
  return CreatePathMkdirResponse(_fbb, success, error_msg ? _fbb.CreateString(error_msg) : 0);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHMKDIR_MBTOOL_DAEMON_V3_H_
