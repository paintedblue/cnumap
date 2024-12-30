// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: api.proto
// Protobuf C++ Version: 5.29.1

#include "api.pb.h"

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

inline constexpr Api::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        options_{nullptr},
        trip_{nullptr},
        directions_{nullptr},
        status_{nullptr},
        matrix_{nullptr},
        isochrone_{nullptr},
        expansion_{nullptr},
        info_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR Api::Api(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct ApiDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ApiDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ApiDefaultTypeInternal() {}
  union {
    Api _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ApiDefaultTypeInternal _Api_default_instance_;
}  // namespace valhalla
namespace valhalla {
// ===================================================================

class Api::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Api>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Api, _impl_._has_bits_);
};

void Api::clear_options() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.options_ != nullptr) _impl_.options_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Api::clear_trip() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.trip_ != nullptr) _impl_.trip_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void Api::clear_directions() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.directions_ != nullptr) _impl_.directions_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void Api::clear_status() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.status_ != nullptr) _impl_.status_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
void Api::clear_matrix() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.matrix_ != nullptr) _impl_.matrix_->Clear();
  _impl_._has_bits_[0] &= ~0x00000010u;
}
void Api::clear_isochrone() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.isochrone_ != nullptr) _impl_.isochrone_->Clear();
  _impl_._has_bits_[0] &= ~0x00000020u;
}
void Api::clear_expansion() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.expansion_ != nullptr) _impl_.expansion_->Clear();
  _impl_._has_bits_[0] &= ~0x00000040u;
}
void Api::clear_info() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.info_ != nullptr) _impl_.info_->Clear();
  _impl_._has_bits_[0] &= ~0x00000080u;
}
Api::Api(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:valhalla.Api)
}
inline PROTOBUF_NDEBUG_INLINE Api::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::valhalla::Api& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

Api::Api(
    ::google::protobuf::Arena* arena,
    const Api& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Api* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.options_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Options>(
                              arena, *from._impl_.options_)
                        : nullptr;
  _impl_.trip_ = (cached_has_bits & 0x00000002u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Trip>(
                              arena, *from._impl_.trip_)
                        : nullptr;
  _impl_.directions_ = (cached_has_bits & 0x00000004u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Directions>(
                              arena, *from._impl_.directions_)
                        : nullptr;
  _impl_.status_ = (cached_has_bits & 0x00000008u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Status>(
                              arena, *from._impl_.status_)
                        : nullptr;
  _impl_.matrix_ = (cached_has_bits & 0x00000010u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Matrix>(
                              arena, *from._impl_.matrix_)
                        : nullptr;
  _impl_.isochrone_ = (cached_has_bits & 0x00000020u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Isochrone>(
                              arena, *from._impl_.isochrone_)
                        : nullptr;
  _impl_.expansion_ = (cached_has_bits & 0x00000040u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Expansion>(
                              arena, *from._impl_.expansion_)
                        : nullptr;
  _impl_.info_ = (cached_has_bits & 0x00000080u) ? ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Info>(
                              arena, *from._impl_.info_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:valhalla.Api)
}
inline PROTOBUF_NDEBUG_INLINE Api::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Api::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, options_),
           0,
           offsetof(Impl_, info_) -
               offsetof(Impl_, options_) +
               sizeof(Impl_::info_));
}
Api::~Api() {
  // @@protoc_insertion_point(destructor:valhalla.Api)
  SharedDtor(*this);
}
inline void Api::SharedDtor(MessageLite& self) {
  Api& this_ = static_cast<Api&>(self);
  this_._internal_metadata_.Delete<std::string>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  delete this_._impl_.options_;
  delete this_._impl_.trip_;
  delete this_._impl_.directions_;
  delete this_._impl_.status_;
  delete this_._impl_.matrix_;
  delete this_._impl_.isochrone_;
  delete this_._impl_.expansion_;
  delete this_._impl_.info_;
  this_._impl_.~Impl_();
}

inline void* Api::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Api(arena);
}
constexpr auto Api::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::ZeroInit(sizeof(Api),
                                            alignof(Api));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<13> Api::_class_data_ = {
    {
        &_Api_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Api::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<Api>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Api::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<Api>(), &Api::ByteSizeLong,
            &Api::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Api, _impl_._cached_size_),
        true,
    },
    "valhalla.Api",
};
const ::google::protobuf::internal::ClassData* Api::GetClassData() const {
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 8, 8, 0, 2> Api::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Api, _impl_._has_bits_),
    0, // no _extensions_
    20, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294442880,  // skipmap
    offsetof(decltype(_table_), field_entries),
    8,  // num_field_entries
    8,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::valhalla::Api>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .valhalla.Options options = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(Api, _impl_.options_)}},
    // .valhalla.Trip trip = 2;
    {::_pbi::TcParser::FastMtS1,
     {18, 1, 1, PROTOBUF_FIELD_OFFSET(Api, _impl_.trip_)}},
    // .valhalla.Directions directions = 3;
    {::_pbi::TcParser::FastMtS1,
     {26, 2, 2, PROTOBUF_FIELD_OFFSET(Api, _impl_.directions_)}},
    // .valhalla.Status status = 4;
    {::_pbi::TcParser::FastMtS1,
     {34, 3, 3, PROTOBUF_FIELD_OFFSET(Api, _impl_.status_)}},
    // .valhalla.Matrix matrix = 5;
    {::_pbi::TcParser::FastMtS1,
     {42, 4, 4, PROTOBUF_FIELD_OFFSET(Api, _impl_.matrix_)}},
    // .valhalla.Isochrone isochrone = 6;
    {::_pbi::TcParser::FastMtS1,
     {50, 5, 5, PROTOBUF_FIELD_OFFSET(Api, _impl_.isochrone_)}},
    // .valhalla.Expansion expansion = 7;
    {::_pbi::TcParser::FastMtS1,
     {58, 6, 6, PROTOBUF_FIELD_OFFSET(Api, _impl_.expansion_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .valhalla.Options options = 1;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.options_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Trip trip = 2;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.trip_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Directions directions = 3;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.directions_), _Internal::kHasBitsOffset + 2, 2,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Status status = 4;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.status_), _Internal::kHasBitsOffset + 3, 3,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Matrix matrix = 5;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.matrix_), _Internal::kHasBitsOffset + 4, 4,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Isochrone isochrone = 6;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.isochrone_), _Internal::kHasBitsOffset + 5, 5,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Expansion expansion = 7;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.expansion_), _Internal::kHasBitsOffset + 6, 6,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // .valhalla.Info info = 20;
    {PROTOBUF_FIELD_OFFSET(Api, _impl_.info_), _Internal::kHasBitsOffset + 7, 7,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::valhalla::Options>()},
    {::_pbi::TcParser::GetTable<::valhalla::Trip>()},
    {::_pbi::TcParser::GetTable<::valhalla::Directions>()},
    {::_pbi::TcParser::GetTable<::valhalla::Status>()},
    {::_pbi::TcParser::GetTable<::valhalla::Matrix>()},
    {::_pbi::TcParser::GetTable<::valhalla::Isochrone>()},
    {::_pbi::TcParser::GetTable<::valhalla::Expansion>()},
    {::_pbi::TcParser::GetTable<::valhalla::Info>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void Api::Clear() {
// @@protoc_insertion_point(message_clear_start:valhalla.Api)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.options_ != nullptr);
      _impl_.options_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.trip_ != nullptr);
      _impl_.trip_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.directions_ != nullptr);
      _impl_.directions_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(_impl_.status_ != nullptr);
      _impl_.status_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      ABSL_DCHECK(_impl_.matrix_ != nullptr);
      _impl_.matrix_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      ABSL_DCHECK(_impl_.isochrone_ != nullptr);
      _impl_.isochrone_->Clear();
    }
    if (cached_has_bits & 0x00000040u) {
      ABSL_DCHECK(_impl_.expansion_ != nullptr);
      _impl_.expansion_->Clear();
    }
    if (cached_has_bits & 0x00000080u) {
      ABSL_DCHECK(_impl_.info_ != nullptr);
      _impl_.info_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Api::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Api& this_ = static_cast<const Api&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Api::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Api& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:valhalla.Api)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // .valhalla.Options options = 1;
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.options_, this_._impl_.options_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Trip trip = 2;
          if (cached_has_bits & 0x00000002u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                2, *this_._impl_.trip_, this_._impl_.trip_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Directions directions = 3;
          if (cached_has_bits & 0x00000004u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                3, *this_._impl_.directions_, this_._impl_.directions_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Status status = 4;
          if (cached_has_bits & 0x00000008u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                4, *this_._impl_.status_, this_._impl_.status_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Matrix matrix = 5;
          if (cached_has_bits & 0x00000010u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                5, *this_._impl_.matrix_, this_._impl_.matrix_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Isochrone isochrone = 6;
          if (cached_has_bits & 0x00000020u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                6, *this_._impl_.isochrone_, this_._impl_.isochrone_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Expansion expansion = 7;
          if (cached_has_bits & 0x00000040u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                7, *this_._impl_.expansion_, this_._impl_.expansion_->GetCachedSize(), target,
                stream);
          }

          // .valhalla.Info info = 20;
          if (cached_has_bits & 0x00000080u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                20, *this_._impl_.info_, this_._impl_.info_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target = stream->WriteRaw(
                this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
                static_cast<int>(this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
          }
          // @@protoc_insertion_point(serialize_to_array_end:valhalla.Api)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Api::ByteSizeLong(const MessageLite& base) {
          const Api& this_ = static_cast<const Api&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Api::ByteSizeLong() const {
          const Api& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:valhalla.Api)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
          cached_has_bits = this_._impl_._has_bits_[0];
          if (cached_has_bits & 0x000000ffu) {
            // .valhalla.Options options = 1;
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.options_);
            }
            // .valhalla.Trip trip = 2;
            if (cached_has_bits & 0x00000002u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.trip_);
            }
            // .valhalla.Directions directions = 3;
            if (cached_has_bits & 0x00000004u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.directions_);
            }
            // .valhalla.Status status = 4;
            if (cached_has_bits & 0x00000008u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.status_);
            }
            // .valhalla.Matrix matrix = 5;
            if (cached_has_bits & 0x00000010u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.matrix_);
            }
            // .valhalla.Isochrone isochrone = 6;
            if (cached_has_bits & 0x00000020u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.isochrone_);
            }
            // .valhalla.Expansion expansion = 7;
            if (cached_has_bits & 0x00000040u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.expansion_);
            }
            // .valhalla.Info info = 20;
            if (cached_has_bits & 0x00000080u) {
              total_size += 2 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.info_);
            }
          }
          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            total_size += this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
          }
          this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
          return total_size;
        }

void Api::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Api*>(&to_msg);
  auto& from = static_cast<const Api&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:valhalla.Api)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(from._impl_.options_ != nullptr);
      if (_this->_impl_.options_ == nullptr) {
        _this->_impl_.options_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Options>(arena, *from._impl_.options_);
      } else {
        _this->_impl_.options_->MergeFrom(*from._impl_.options_);
      }
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(from._impl_.trip_ != nullptr);
      if (_this->_impl_.trip_ == nullptr) {
        _this->_impl_.trip_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Trip>(arena, *from._impl_.trip_);
      } else {
        _this->_impl_.trip_->MergeFrom(*from._impl_.trip_);
      }
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(from._impl_.directions_ != nullptr);
      if (_this->_impl_.directions_ == nullptr) {
        _this->_impl_.directions_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Directions>(arena, *from._impl_.directions_);
      } else {
        _this->_impl_.directions_->MergeFrom(*from._impl_.directions_);
      }
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(from._impl_.status_ != nullptr);
      if (_this->_impl_.status_ == nullptr) {
        _this->_impl_.status_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Status>(arena, *from._impl_.status_);
      } else {
        _this->_impl_.status_->MergeFrom(*from._impl_.status_);
      }
    }
    if (cached_has_bits & 0x00000010u) {
      ABSL_DCHECK(from._impl_.matrix_ != nullptr);
      if (_this->_impl_.matrix_ == nullptr) {
        _this->_impl_.matrix_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Matrix>(arena, *from._impl_.matrix_);
      } else {
        _this->_impl_.matrix_->MergeFrom(*from._impl_.matrix_);
      }
    }
    if (cached_has_bits & 0x00000020u) {
      ABSL_DCHECK(from._impl_.isochrone_ != nullptr);
      if (_this->_impl_.isochrone_ == nullptr) {
        _this->_impl_.isochrone_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Isochrone>(arena, *from._impl_.isochrone_);
      } else {
        _this->_impl_.isochrone_->MergeFrom(*from._impl_.isochrone_);
      }
    }
    if (cached_has_bits & 0x00000040u) {
      ABSL_DCHECK(from._impl_.expansion_ != nullptr);
      if (_this->_impl_.expansion_ == nullptr) {
        _this->_impl_.expansion_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Expansion>(arena, *from._impl_.expansion_);
      } else {
        _this->_impl_.expansion_->MergeFrom(*from._impl_.expansion_);
      }
    }
    if (cached_has_bits & 0x00000080u) {
      ABSL_DCHECK(from._impl_.info_ != nullptr);
      if (_this->_impl_.info_ == nullptr) {
        _this->_impl_.info_ =
            ::google::protobuf::MessageLite::CopyConstruct<::valhalla::Info>(arena, *from._impl_.info_);
      } else {
        _this->_impl_.info_->MergeFrom(*from._impl_.info_);
      }
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Api::CopyFrom(const Api& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:valhalla.Api)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Api::InternalSwap(Api* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Api, _impl_.info_)
      + sizeof(Api::_impl_.info_)
      - PROTOBUF_FIELD_OFFSET(Api, _impl_.options_)>(
          reinterpret_cast<char*>(&_impl_.options_),
          reinterpret_cast<char*>(&other->_impl_.options_));
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace valhalla
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"