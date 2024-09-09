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
	 * Function ChallengeDisplay.ChallengeDisplay_C.Play Telop
	 */
	struct UChallengeDisplay_C_PlayTelop_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.GetTelopSubText
	 */
	struct UChallengeDisplay_C_GetTelopSubText_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.UpdateTime
	 */
	struct UChallengeDisplay_C_UpdateTime_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.CheckTime
	 */
	struct UChallengeDisplay_C_CheckTime_Params
	{
	public:
		bool                                                       FalseIsNone;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0LJ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnProcecssMessage
	 */
	struct UChallengeDisplay_C_OnProcecssMessage_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.AnimInOut
	 */
	struct UChallengeDisplay_C_AnimInOut_Params
	{
	public:
		bool                                                       TrueIsIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJS6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.UpdateMissionInfo
	 */
	struct UChallengeDisplay_C_UpdateMissionInfo_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.StartMission
	 */
	struct UChallengeDisplay_C_StartMission_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.SetFail
	 */
	struct UChallengeDisplay_C_SetFail_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnTimeOut
	 */
	struct UChallengeDisplay_C_OnTimeOut_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnUpdateDelegate
	 */
	struct UChallengeDisplay_C_OnUpdateDelegate_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Tick
	 */
	struct UChallengeDisplay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnFailed
	 */
	struct UChallengeDisplay_C_OnFailed_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnMissionSet
	 */
	struct UChallengeDisplay_C_OnMissionSet_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Destruct
	 */
	struct UChallengeDisplay_C_Destruct_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Construct
	 */
	struct UChallengeDisplay_C_Construct_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.OnClear
	 */
	struct UChallengeDisplay_C_OnClear_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Init
	 */
	struct UChallengeDisplay_C_Init_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Unbind
	 */
	struct UChallengeDisplay_C_Unbind_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.Bind
	 */
	struct UChallengeDisplay_C_Bind_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.ExecuteUbergraph_ChallengeDisplay
	 */
	struct UChallengeDisplay_C_ExecuteUbergraph_ChallengeDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeOutDisplay3__DelegateSignature
	 */
	struct UChallengeDisplay_C_EventAnimeOutDisplay3__DelegateSignature_Params
	{	};

	/**
	 * Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeInDisplay3__DelegateSignature
	 */
	struct UChallengeDisplay_C_EventAnimeInDisplay3__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
