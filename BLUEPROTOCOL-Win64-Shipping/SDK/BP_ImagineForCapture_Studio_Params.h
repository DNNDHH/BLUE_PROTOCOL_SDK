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
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ResetImagine
	 */
	struct ABP_ImagineForCapture_Studio_C_ResetImagine_Params
	{	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.UserConstructionScript
	 */
	struct ABP_ImagineForCapture_Studio_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.LoadImagineAsset
	 */
	struct ABP_ImagineForCapture_Studio_C_LoadImagineAsset_Params
	{
	public:
		int32_t                                                    InImagineItemId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ReceiveBeginPlay
	 */
	struct ABP_ImagineForCapture_Studio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.OnSetImagineData_Event_1
	 */
	struct ABP_ImagineForCapture_Studio_C_OnSetImagineData_Event_1_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ExecuteUbergraph_BP_ImagineForCapture_Studio
	 */
	struct ABP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.OnImagineLoadedDelegete__DelegateSignature
	 */
	struct ABP_ImagineForCapture_Studio_C_OnImagineLoadedDelegete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
