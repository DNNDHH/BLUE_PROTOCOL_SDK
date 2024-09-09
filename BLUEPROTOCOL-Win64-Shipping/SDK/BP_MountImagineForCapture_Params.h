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
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ApplyImagineData
	 */
	struct ABP_MountImagineForCapture_C_ApplyImagineData_Params
	{	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.FindCaptureImagineData
	 */
	struct ABP_MountImagineForCapture_C_FindCaptureImagineData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KM0R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCaptureStudioImagineData                         ImagineData;                                             // 0x0008(0x00D8)  (Parm, OutParm)
		bool                                                       bExist;                                                  // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M97M[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.Set Weapons
	 */
	struct ABP_MountImagineForCapture_C_SetWeapons_Params
	{	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.UserConstructionScript
	 */
	struct ABP_MountImagineForCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveBeginPlay
	 */
	struct ABP_MountImagineForCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.SetImagineData
	 */
	struct ABP_MountImagineForCapture_C_SetImagineData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnAssetLoaded
	 */
	struct ABP_MountImagineForCapture_C_OnAssetLoaded_Params
	{
	public:
		bool                                                       bInResult;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveTick
	 */
	struct ABP_MountImagineForCapture_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ExecuteUbergraph_BP_MountImagineForCapture
	 */
	struct ABP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnSetImagineData__DelegateSignature
	 */
	struct ABP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
