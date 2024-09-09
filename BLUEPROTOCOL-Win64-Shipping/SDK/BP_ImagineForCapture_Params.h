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
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.Update Chara Create Component
	 */
	struct ABP_ImagineForCapture_C_UpdateCharaCreateComponent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.GetTargetBodyMesh
	 */
	struct ABP_ImagineForCapture_C_GetTargetBodyMesh_Params
	{
	public:
		class USBSkeletalMeshComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.ApplyImagineData
	 */
	struct ABP_ImagineForCapture_C_ApplyImagineData_Params
	{	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.FindCaptureImagineData
	 */
	struct ABP_ImagineForCapture_C_FindCaptureImagineData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGCR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCaptureStudioImagineData                         ImagineData;                                             // 0x0008(0x00D8)  (Parm, OutParm)
		bool                                                       bExist;                                                  // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XOGN[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetWeapons
	 */
	struct ABP_ImagineForCapture_C_SetWeapons_Params
	{	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.UserConstructionScript
	 */
	struct ABP_ImagineForCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveBeginPlay
	 */
	struct ABP_ImagineForCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetImagineData
	 */
	struct ABP_ImagineForCapture_C_SetImagineData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnAssetLoaded
	 */
	struct ABP_ImagineForCapture_C_OnAssetLoaded_Params
	{
	public:
		bool                                                       bInResult;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveTick
	 */
	struct ABP_ImagineForCapture_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnCreateLoaded
	 */
	struct ABP_ImagineForCapture_C_OnCreateLoaded_Params
	{
	public:
		bool                                                       bInResult;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.ExecuteUbergraph_BP_ImagineForCapture
	 */
	struct ABP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnSetImagineData__DelegateSignature
	 */
	struct ABP_ImagineForCapture_C_OnSetImagineData__DelegateSignature_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
