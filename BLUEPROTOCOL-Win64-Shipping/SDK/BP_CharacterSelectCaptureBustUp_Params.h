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
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Save Facial Num
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_SaveFacialNum_Params
	{
	public:
		int32_t                                                    FacialNum;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Load Facial Num
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_LoadFacialNum_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.IsLoad
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_IsLoad_Params
	{
	public:
		bool                                                       bLoad;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.UpdetaCameraLocation
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_UpdetaCameraLocation_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ChangeFacial
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_ChangeFacial_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetRender
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_SetRender_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.BustUpInitialize
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_BustUpInitialize_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterShortId;                                        // 0x03C0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ReceiveBeginPlay
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.CustomEvent_2
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_CustomEvent_2_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.DebugLocationCheckUpdeta
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_DebugLocationCheckUpdeta_Params
	{	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetFacial
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_SetFacial_Params
	{
	public:
		int32_t                                                    FacialNum;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Update
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_Update_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ExecuteUbergraph_BP_CharacterSelectCaptureBustUp
	 */
	struct ABP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0LOT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
