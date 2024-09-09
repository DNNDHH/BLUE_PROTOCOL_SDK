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
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CaptureVisible
	 */
	struct ABP_CharacterSelectCaptureOne_C_CaptureVisible_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Is Load Now
	 */
	struct ABP_CharacterSelectCaptureOne_C_IsLoadNow_Params
	{
	public:
		bool                                                       bLoad;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GetNumber
	 */
	struct ABP_CharacterSelectCaptureOne_C_GetNumber_Params
	{
	public:
		int32_t                                                    MyNumber;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Initialize
	 */
	struct ABP_CharacterSelectCaptureOne_C_Initialize_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Number;                                                  // 0x03C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPXT[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CharacterId;                                             // 0x03C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    PoseID;                                                  // 0x03D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CharaIndex;                                              // 0x03DC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ReceiveBeginPlay
	 */
	struct ABP_CharacterSelectCaptureOne_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CustomEvent_2
	 */
	struct ABP_CharacterSelectCaptureOne_C_CustomEvent_2_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DebugLocationCheckUpdeta
	 */
	struct ABP_CharacterSelectCaptureOne_C_DebugLocationCheckUpdeta_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.UpdetaCameraLocation
	 */
	struct ABP_CharacterSelectCaptureOne_C_UpdetaCameraLocation_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Update
	 */
	struct ABP_CharacterSelectCaptureOne_C_Update_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SelectICharandex;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GameStartPlay
	 */
	struct ABP_CharacterSelectCaptureOne_C_GameStartPlay_Params
	{
	public:
		int32_t                                                    SelectICharandex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DefaultPause
	 */
	struct ABP_CharacterSelectCaptureOne_C_DefaultPause_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ExecuteUbergraph_BP_CharacterSelectCaptureOne
	 */
	struct ABP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
