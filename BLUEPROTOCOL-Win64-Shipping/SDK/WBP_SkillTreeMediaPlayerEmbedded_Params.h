#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Request Play Media
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_RequestPlayMedia_Params
	{
	public:
		unsigned char                                              UnknownData_QF2R[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnLoaded_41AC99C64E613999FD6600A6E8657C13
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.CustomEvent_1
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_1_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Destruct
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_Destruct_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.FinishFunction
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_FinishFunction_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.BindMediaEvent
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_BindMediaEvent_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Cancel
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_Cancel_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.MovieLoadRequest
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Construct
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_Construct_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.TriPlay
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_TriPlay_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Unbind
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_Unbind_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0UU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnPlayStart__DelegateSignature
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_OnPlayStart__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnFinish__DelegateSignature
	 */
	struct UWBP_SkillTreeMediaPlayerEmbedded_C_OnFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
