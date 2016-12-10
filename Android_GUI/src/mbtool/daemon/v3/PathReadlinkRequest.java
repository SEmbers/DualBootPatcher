// automatically generated by the FlatBuffers compiler, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class PathReadlinkRequest extends Table {
  public static PathReadlinkRequest getRootAsPathReadlinkRequest(ByteBuffer _bb) { return getRootAsPathReadlinkRequest(_bb, new PathReadlinkRequest()); }
  public static PathReadlinkRequest getRootAsPathReadlinkRequest(ByteBuffer _bb, PathReadlinkRequest obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public PathReadlinkRequest __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public String path() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer pathAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }

  public static int createPathReadlinkRequest(FlatBufferBuilder builder,
      int pathOffset) {
    builder.startObject(1);
    PathReadlinkRequest.addPath(builder, pathOffset);
    return PathReadlinkRequest.endPathReadlinkRequest(builder);
  }

  public static void startPathReadlinkRequest(FlatBufferBuilder builder) { builder.startObject(1); }
  public static void addPath(FlatBufferBuilder builder, int pathOffset) { builder.addOffset(0, pathOffset, 0); }
  public static int endPathReadlinkRequest(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

