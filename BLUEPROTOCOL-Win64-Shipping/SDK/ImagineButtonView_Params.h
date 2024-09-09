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
	 * Function ImagineButtonView.ImagineButtonView_C.ApplyBasicImagineData
	 */
	struct UImagineButtonView_C_ApplyBasicImagineData_Params
	{
	public:
		struct FOwnItemInfo                                        ImagineData;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.ApplySelectImagine
	 */
	struct UImagineButtonView_C_ApplySelectImagine_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113
	 */
	struct UImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.RequestLoadImage
	 */
	struct UImagineButtonView_C_RequestLoadImage_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.PreConstruct
	 */
	struct UImagineButtonView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.Construct
	 */
	struct UImagineButtonView_C_Construct_Params
	{	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UImagineButtonView_C_BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.ExecuteUbergraph_ImagineButtonView
	 */
	struct UImagineButtonView_C_ExecuteUbergraph_ImagineButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LVL5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineButtonView.ImagineButtonView_C.OnClicked__DelegateSignature
	 */
	struct UImagineButtonView_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
