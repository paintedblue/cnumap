// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: status.proto
// Protobuf C++ Version: 5.29.1

#include "status.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace valhalla {

inline constexpr Status::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : available_actions_{},
        version_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        tileset_last_modified_{0u},
        has_has_tiles_{},
        has_has_admins_{},
        has_has_timezones_{},
        has_has_live_traffic_{},
        has_bbox_{},
        has_has_transit_tiles_{},
        has_osm_changeset_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Status::Status(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct StatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StatusDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~StatusDefaultTypeInternal() {}
  union {
    Status _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace valhalla
namespace valhalla {
// ===================================================================

class Status::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::valhalla::Status, _impl_._oneof_case_);
};

Status::Status(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:valhalla.Status)
}
inline PROTOBUF_NDEBUG_INLINE Status::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::valhalla::Status& from_msg)
      : available_actions_{visibility, arena, from.available_actions_},
        version_(arena, from.version_),
        has_has_tiles_{},
        has_has_admins_{},
        has_has_timezones_{},
        has_has_live_traffic_{},
        has_bbox_{},
        has_has_transit_tiles_{},
        has_osm_changeset_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0], from._oneof_case_[1], from._oneof_case_[2], from._oneof_case_[3], from._oneof_case_[4], from._oneof_case_[5], from._oneof_case_[6]} {}

Status::Status(
    ::google::protobuf::Arena* arena,
    const Status& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Status* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.tileset_last_modified_ = from._impl_.tileset_last_modified_;
  switch (has_has_tiles_case()) {
    case HAS_HAS_TILES_NOT_SET:
      break;
      case kHasTiles:
        _impl_.has_has_tiles_.has_tiles_ = from._impl_.has_has_tiles_.has_tiles_;
        break;
  }
  switch (has_has_admins_case()) {
    case HAS_HAS_ADMINS_NOT_SET:
      break;
      case kHasAdmins:
        _impl_.has_has_admins_.has_admins_ = from._impl_.has_has_admins_.has_admins_;
        break;
  }
  switch (has_has_timezones_case()) {
    case HAS_HAS_TIMEZONES_NOT_SET:
      break;
      case kHasTimezones:
        _impl_.has_has_timezones_.has_timezones_ = from._impl_.has_has_timezones_.has_timezones_;
        break;
  }
  switch (has_has_live_traffic_case()) {
    case HAS_HAS_LIVE_TRAFFIC_NOT_SET:
      break;
      case kHasLiveTraffic:
        _impl_.has_has_live_traffic_.has_live_traffic_ = from._impl_.has_has_live_traffic_.has_live_traffic_;
        break;
  }
  switch (has_bbox_case()) {
    case HAS_BBOX_NOT_SET:
      break;
      case kBbox:
        new (&_impl_.has_bbox_.bbox_) decltype(_impl_.has_bbox_.bbox_){arena, from._impl_.has_bbox_.bbox_};
        break;
  }
  switch (has_has_transit_tiles_case()) {
    case HAS_HAS_TRANSIT_TILES_NOT_SET:
      break;
      case kHasTransitTiles:
        _impl_.has_has_transit_tiles_.has_transit_tiles_ = from._impl_.has_has_transit_tiles_.has_transit_tiles_;
        break;
  }
  switch (has_osm_changeset_case()) {
    case HAS_OSM_CHANGESET_NOT_SET:
      break;
      case kOsmChangeset:
        _impl_.has_osm_changeset_.osm_changeset_ = from._impl_.has_osm_changeset_.osm_changeset_;
        break;
  }

  // @@protoc_insertion_point(copy_constructor:valhalla.Status)
}
inline PROTOBUF_NDEBUG_INLINE Status::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : available_actions_{visibility, arena},
        version_(arena),
        has_has_tiles_{},
        has_has_admins_{},
        has_has_timezones_{},
        has_has_live_traffic_{},
        has_bbox_{},
        has_has_transit_tiles_{},
        has_osm_changeset_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Status::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.tileset_last_modified_ = {};
}
Status::~Status() {
  // @@protoc_insertion_point(destructor:valhalla.Status)
  SharedDtor(*this);
}
inline void Status::SharedDtor(MessageLite& self) {
  Status& this_ = static_cast<Status&>(self);
  this_._internal_metadata_.Delete<std::string>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.version_.Destroy();
  if (this_.has_has_has_tiles()) {
    this_.clear_has_has_tiles();
  }
  if (this_.has_has_has_admins()) {
    this_.clear_has_has_admins();
  }
  if (this_.has_has_has_timezones()) {
    this_.clear_has_has_timezones();
  }
  if (this_.has_has_has_live_traffic()) {
    this_.clear_has_has_live_traffic();
  }
  if (this_.has_has_bbox()) {
    this_.clear_has_bbox();
  }
  if (this_.has_has_has_transit_tiles()) {
    this_.clear_has_has_transit_tiles();
  }
  if (this_.has_has_osm_changeset()) {
    this_.clear_has_osm_changeset();
  }
  this_._impl_.~Impl_();
}

void Status::clear_has_has_tiles() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_has_tiles_case()) {
    case kHasTiles: {
      // No need to clear
      break;
    }
    case HAS_HAS_TILES_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = HAS_HAS_TILES_NOT_SET;
}

void Status::clear_has_has_admins() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_has_admins_case()) {
    case kHasAdmins: {
      // No need to clear
      break;
    }
    case HAS_HAS_ADMINS_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[1] = HAS_HAS_ADMINS_NOT_SET;
}

void Status::clear_has_has_timezones() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_has_timezones_case()) {
    case kHasTimezones: {
      // No need to clear
      break;
    }
    case HAS_HAS_TIMEZONES_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[2] = HAS_HAS_TIMEZONES_NOT_SET;
}

void Status::clear_has_has_live_traffic() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_has_live_traffic_case()) {
    case kHasLiveTraffic: {
      // No need to clear
      break;
    }
    case HAS_HAS_LIVE_TRAFFIC_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[3] = HAS_HAS_LIVE_TRAFFIC_NOT_SET;
}

void Status::clear_has_bbox() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_bbox_case()) {
    case kBbox: {
      _impl_.has_bbox_.bbox_.Destroy();
      break;
    }
    case HAS_BBOX_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[4] = HAS_BBOX_NOT_SET;
}

void Status::clear_has_has_transit_tiles() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_has_transit_tiles_case()) {
    case kHasTransitTiles: {
      // No need to clear
      break;
    }
    case HAS_HAS_TRANSIT_TILES_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[5] = HAS_HAS_TRANSIT_TILES_NOT_SET;
}

void Status::clear_has_osm_changeset() {
// @@protoc_insertion_point(one_of_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (has_osm_changeset_case()) {
    case kOsmChangeset: {
      // No need to clear
      break;
    }
    case HAS_OSM_CHANGESET_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[6] = HAS_OSM_CHANGESET_NOT_SET;
}


inline void* Status::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Status(arena);
}
constexpr auto Status::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(Status, _impl_.available_actions_) +
          decltype(Status::_impl_.available_actions_)::
              InternalGetArenaOffset(
                  ::google::protobuf::MessageLite::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::CopyInit(
        sizeof(Status), alignof(Status), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&Status::PlacementNew_,
                                 sizeof(Status),
                                 alignof(Status));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<16> Status::_class_data_ = {
    {
        &_Status_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Status::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<Status>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Status::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<Status>(), &Status::ByteSizeLong,
            &Status::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Status, _impl_._cached_size_),
        true,
    },
    "valhalla.Status",
};
const ::google::protobuf::internal::ClassData* Status::GetClassData() const {
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 10, 0, 60, 2> Status::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    10, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966272,  // skipmap
    offsetof(decltype(_table_), field_entries),
    10,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::valhalla::Status>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated string available_actions = 8;
    {::_pbi::TcParser::FastUR1,
     {66, 63, 0, PROTOBUF_FIELD_OFFSET(Status, _impl_.available_actions_)}},
    {::_pbi::TcParser::MiniParse, {}},
    // string version = 6;
    {::_pbi::TcParser::FastUS1,
     {50, 63, 0, PROTOBUF_FIELD_OFFSET(Status, _impl_.version_)}},
    // uint32 tileset_last_modified = 7;
    {::_pbi::TcParser::FastV32S1,
     {56, 63, 0, PROTOBUF_FIELD_OFFSET(Status, _impl_.tileset_last_modified_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool has_tiles = 1;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_has_tiles_.has_tiles_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // bool has_admins = 2;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_has_admins_.has_admins_), _Internal::kOneofCaseOffset + 4, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // bool has_timezones = 3;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_has_timezones_.has_timezones_), _Internal::kOneofCaseOffset + 8, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // bool has_live_traffic = 4;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_has_live_traffic_.has_live_traffic_), _Internal::kOneofCaseOffset + 12, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // string bbox = 5;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_bbox_.bbox_), _Internal::kOneofCaseOffset + 16, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string version = 6;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.version_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // uint32 tileset_last_modified = 7;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.tileset_last_modified_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // repeated string available_actions = 8;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.available_actions_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
    // bool has_transit_tiles = 9;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_has_transit_tiles_.has_transit_tiles_), _Internal::kOneofCaseOffset + 20, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // uint64 osm_changeset = 10;
    {PROTOBUF_FIELD_OFFSET(Status, _impl_.has_osm_changeset_.osm_changeset_), _Internal::kOneofCaseOffset + 24, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUInt64)},
  }},
  // no aux_entries
  {{
    "\17\0\0\0\0\4\7\0\21\0\0\0\0\0\0\0"
    "valhalla.Status"
    "bbox"
    "version"
    "available_actions"
  }},
};

PROTOBUF_NOINLINE void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:valhalla.Status)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.available_actions_.Clear();
  _impl_.version_.ClearToEmpty();
  _impl_.tileset_last_modified_ = 0u;
  clear_has_has_tiles();
  clear_has_has_admins();
  clear_has_has_timezones();
  clear_has_has_live_traffic();
  clear_has_bbox();
  clear_has_has_transit_tiles();
  clear_has_osm_changeset();
  _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Status::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Status& this_ = static_cast<const Status&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Status::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Status& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:valhalla.Status)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // bool has_tiles = 1;
          if (this_.has_has_tiles_case() == kHasTiles) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                1, this_._internal_has_tiles(), target);
          }

          // bool has_admins = 2;
          if (this_.has_has_admins_case() == kHasAdmins) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                2, this_._internal_has_admins(), target);
          }

          // bool has_timezones = 3;
          if (this_.has_has_timezones_case() == kHasTimezones) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                3, this_._internal_has_timezones(), target);
          }

          // bool has_live_traffic = 4;
          if (this_.has_has_live_traffic_case() == kHasLiveTraffic) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                4, this_._internal_has_live_traffic(), target);
          }

          // string bbox = 5;
          if (this_.has_bbox_case() == kBbox) {
            const std::string& _s = this_._internal_bbox();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "valhalla.Status.bbox");
            target = stream->WriteStringMaybeAliased(5, _s, target);
          }

          // string version = 6;
          if (!this_._internal_version().empty()) {
            const std::string& _s = this_._internal_version();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "valhalla.Status.version");
            target = stream->WriteStringMaybeAliased(6, _s, target);
          }

          // uint32 tileset_last_modified = 7;
          if (this_._internal_tileset_last_modified() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
                7, this_._internal_tileset_last_modified(), target);
          }

          // repeated string available_actions = 8;
          for (int i = 0, n = this_._internal_available_actions_size(); i < n; ++i) {
            const auto& s = this_._internal_available_actions().Get(i);
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "valhalla.Status.available_actions");
            target = stream->WriteString(8, s, target);
          }

          // bool has_transit_tiles = 9;
          if (this_.has_has_transit_tiles_case() == kHasTransitTiles) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                9, this_._internal_has_transit_tiles(), target);
          }

          // uint64 osm_changeset = 10;
          if (this_.has_osm_changeset_case() == kOsmChangeset) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
                10, this_._internal_osm_changeset(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target = stream->WriteRaw(
                this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
                static_cast<int>(this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
          }
          // @@protoc_insertion_point(serialize_to_array_end:valhalla.Status)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Status::ByteSizeLong(const MessageLite& base) {
          const Status& this_ = static_cast<const Status&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Status::ByteSizeLong() const {
          const Status& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:valhalla.Status)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated string available_actions = 8;
            {
              total_size +=
                  1 * ::google::protobuf::internal::FromIntSize(this_._internal_available_actions().size());
              for (int i = 0, n = this_._internal_available_actions().size(); i < n; ++i) {
                total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
                    this_._internal_available_actions().Get(i));
              }
            }
          }
           {
            // string version = 6;
            if (!this_._internal_version().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_version());
            }
            // uint32 tileset_last_modified = 7;
            if (this_._internal_tileset_last_modified() != 0) {
              total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
                  this_._internal_tileset_last_modified());
            }
          }
          switch (this_.has_has_tiles_case()) {
            // bool has_tiles = 1;
            case kHasTiles: {
              total_size += 2;
              break;
            }
            case HAS_HAS_TILES_NOT_SET: {
              break;
            }
          }
          switch (this_.has_has_admins_case()) {
            // bool has_admins = 2;
            case kHasAdmins: {
              total_size += 2;
              break;
            }
            case HAS_HAS_ADMINS_NOT_SET: {
              break;
            }
          }
          switch (this_.has_has_timezones_case()) {
            // bool has_timezones = 3;
            case kHasTimezones: {
              total_size += 2;
              break;
            }
            case HAS_HAS_TIMEZONES_NOT_SET: {
              break;
            }
          }
          switch (this_.has_has_live_traffic_case()) {
            // bool has_live_traffic = 4;
            case kHasLiveTraffic: {
              total_size += 2;
              break;
            }
            case HAS_HAS_LIVE_TRAFFIC_NOT_SET: {
              break;
            }
          }
          switch (this_.has_bbox_case()) {
            // string bbox = 5;
            case kBbox: {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_bbox());
              break;
            }
            case HAS_BBOX_NOT_SET: {
              break;
            }
          }
          switch (this_.has_has_transit_tiles_case()) {
            // bool has_transit_tiles = 9;
            case kHasTransitTiles: {
              total_size += 2;
              break;
            }
            case HAS_HAS_TRANSIT_TILES_NOT_SET: {
              break;
            }
          }
          switch (this_.has_osm_changeset_case()) {
            // uint64 osm_changeset = 10;
            case kOsmChangeset: {
              total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
                  this_._internal_osm_changeset());
              break;
            }
            case HAS_OSM_CHANGESET_NOT_SET: {
              break;
            }
          }
          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            total_size += this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
          }
          this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
          return total_size;
        }

void Status::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Status*>(&to_msg);
  auto& from = static_cast<const Status&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:valhalla.Status)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_available_actions()->MergeFrom(from._internal_available_actions());
  if (!from._internal_version().empty()) {
    _this->_internal_set_version(from._internal_version());
  }
  if (from._internal_tileset_last_modified() != 0) {
    _this->_impl_.tileset_last_modified_ = from._impl_.tileset_last_modified_;
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_has_tiles();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kHasTiles: {
        _this->_impl_.has_has_tiles_.has_tiles_ = from._impl_.has_has_tiles_.has_tiles_;
        break;
      }
      case HAS_HAS_TILES_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[1]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[1];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_has_admins();
      }
      _this->_impl_._oneof_case_[1] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kHasAdmins: {
        _this->_impl_.has_has_admins_.has_admins_ = from._impl_.has_has_admins_.has_admins_;
        break;
      }
      case HAS_HAS_ADMINS_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[2]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[2];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_has_timezones();
      }
      _this->_impl_._oneof_case_[2] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kHasTimezones: {
        _this->_impl_.has_has_timezones_.has_timezones_ = from._impl_.has_has_timezones_.has_timezones_;
        break;
      }
      case HAS_HAS_TIMEZONES_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[3]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[3];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_has_live_traffic();
      }
      _this->_impl_._oneof_case_[3] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kHasLiveTraffic: {
        _this->_impl_.has_has_live_traffic_.has_live_traffic_ = from._impl_.has_has_live_traffic_.has_live_traffic_;
        break;
      }
      case HAS_HAS_LIVE_TRAFFIC_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[4]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[4];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_bbox();
      }
      _this->_impl_._oneof_case_[4] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kBbox: {
        if (oneof_needs_init) {
          _this->_impl_.has_bbox_.bbox_.InitDefault();
        }
        _this->_impl_.has_bbox_.bbox_.Set(from._internal_bbox(), arena);
        break;
      }
      case HAS_BBOX_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[5]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[5];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_has_transit_tiles();
      }
      _this->_impl_._oneof_case_[5] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kHasTransitTiles: {
        _this->_impl_.has_has_transit_tiles_.has_transit_tiles_ = from._impl_.has_has_transit_tiles_.has_transit_tiles_;
        break;
      }
      case HAS_HAS_TRANSIT_TILES_NOT_SET:
        break;
    }
  }
  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[6]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[6];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_has_osm_changeset();
      }
      _this->_impl_._oneof_case_[6] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kOsmChangeset: {
        _this->_impl_.has_osm_changeset_.osm_changeset_ = from._impl_.has_osm_changeset_.osm_changeset_;
        break;
      }
      case HAS_OSM_CHANGESET_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:valhalla.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Status::InternalSwap(Status* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.available_actions_.InternalSwap(&other->_impl_.available_actions_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.version_, &other->_impl_.version_, arena);
        swap(_impl_.tileset_last_modified_, other->_impl_.tileset_last_modified_);
  swap(_impl_.has_has_tiles_, other->_impl_.has_has_tiles_);
  swap(_impl_.has_has_admins_, other->_impl_.has_has_admins_);
  swap(_impl_.has_has_timezones_, other->_impl_.has_has_timezones_);
  swap(_impl_.has_has_live_traffic_, other->_impl_.has_has_live_traffic_);
  swap(_impl_.has_bbox_, other->_impl_.has_bbox_);
  swap(_impl_.has_has_transit_tiles_, other->_impl_.has_has_transit_tiles_);
  swap(_impl_.has_osm_changeset_, other->_impl_.has_osm_changeset_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
  swap(_impl_._oneof_case_[1], other->_impl_._oneof_case_[1]);
  swap(_impl_._oneof_case_[2], other->_impl_._oneof_case_[2]);
  swap(_impl_._oneof_case_[3], other->_impl_._oneof_case_[3]);
  swap(_impl_._oneof_case_[4], other->_impl_._oneof_case_[4]);
  swap(_impl_._oneof_case_[5], other->_impl_._oneof_case_[5]);
  swap(_impl_._oneof_case_[6], other->_impl_._oneof_case_[6]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace valhalla
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"