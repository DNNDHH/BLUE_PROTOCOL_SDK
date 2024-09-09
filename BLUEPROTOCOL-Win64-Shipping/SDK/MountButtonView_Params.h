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
	 * Function MountButtonView.MountButtonView_C.ApplyLuckyChance
	 */
	struct UMountButtonView_C_ApplyLuckyChance_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MountButtonView.MountButtonView_C.SetStepMode3
	 */
	struct UMountButtonView_C_SetStepMode3_Params
	{	};

	/**
	 * Function MountButtonView.MountButtonView_C.ApplyBasicImagineData
	 */
	struct UMountButtonView_C_ApplyBasicImagineData_Params
	{
	public:
		struct FOwnItemInfo                                        ImagineData;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MountButtonView.MountButtonView_C.ApplySelectImagine
	 */
	struct UMountButtonView_C_ApplySelectImagine_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MountButtonView.MountButtonView_C.OnLoaded_6D26427C4AE929427C75F2A9967F76D3
	 */
	struct UMountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountButtonView.MountButtonView_C.RequestLoadImage
	 */
	struct UMountButtonView_C_RequestLoadImage_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MountButtonView.MountButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UMountButtonView_C_BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MountButtonView.MountButtonView_C.ExecuteUbergraph_MountButtonView
	 */
	struct UMountButtonView_C_ExecuteUbergraph_MountButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2XZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MountButtonView.MountButtonView_C.OnClicked__DelegateSignature
	 */
	struct UMountButtonView_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
