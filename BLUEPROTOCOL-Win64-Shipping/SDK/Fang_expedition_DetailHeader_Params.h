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
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetCloseBtnVisible
	 */
	struct UFang_expedition_DetailHeader_C_SetCloseBtnVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangData
	 */
	struct UFang_expedition_DetailHeader_C_UpdateFangData_Params
	{	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.IconAnimationStop
	 */
	struct UFang_expedition_DetailHeader_C_IconAnimationStop_Params
	{	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangTexture
	 */
	struct UFang_expedition_DetailHeader_C_UpdateFangTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I16C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetFangData
	 */
	struct UFang_expedition_DetailHeader_C_SetFangData_Params
	{
	public:
		TArray<class FString>                                      UniqueIds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseAnimation;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34C3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetPlayData
	 */
	struct UFang_expedition_DetailHeader_C_SetPlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetStay
	 */
	struct UFang_expedition_DetailHeader_C_SetStay_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnLoaded_9F74DC0840402151039A7F9243B7E826
	 */
	struct UFang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UFang_expedition_DetailHeader_C_BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.FangImageLoad
	 */
	struct UFang_expedition_DetailHeader_C_FangImageLoad_Params
	{
	public:
		unsigned char                                              UnknownData_FF8Z[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ImageAnimationFinish
	 */
	struct UFang_expedition_DetailHeader_C_ImageAnimationFinish_Params
	{	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ExecuteUbergraph_Fang_expedition_DetailHeader
	 */
	struct UFang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4EZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnPressCloseButton__DelegateSignature
	 */
	struct UFang_expedition_DetailHeader_C_OnPressCloseButton__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
