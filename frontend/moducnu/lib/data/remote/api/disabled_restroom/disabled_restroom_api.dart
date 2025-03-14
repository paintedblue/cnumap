import 'package:dio/dio.dart';
import 'package:moducnu/data/remote/api/parse_error_loger.dart';
import 'package:moducnu/data/remote/dto/disabled_restroom/disabled_restroom_dto.dart';
import 'package:retrofit/http.dart';

part 'disabled_restroom_api.g.dart';

@RestApi()
abstract class DisabledRestroomApi {
  factory DisabledRestroomApi(Dio dio, {String baseUrl}) = _DisabledRestroomApi;

  @GET("/api/disabled_restrooms")
  Future<List<DisabledRestroomResponseDto>> getAllRestrooms();
}
