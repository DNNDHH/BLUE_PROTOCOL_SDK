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
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnCloseAnimationFinished
	 */
	struct UUMG_LoginBonusListLine_C_OnCloseAnimationFinished_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ClearItemSelected
	 */
	struct UUMG_LoginBonusListLine_C_ClearItemSelected_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.PlayStumpAnimation
	 */
	struct UUMG_LoginBonusListLine_C_PlayStumpAnimation_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlay;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C8QB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.GetWidget
	 */
	struct UUMG_LoginBonusListLine_C_GetWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QDC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_LoginBonusListLineItem_C*                       Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Set Data
	 */
	struct UUMG_LoginBonusListLine_C_SetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6NNY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBLoginBonusWindowDayData                          Data;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESlateVisibility                                           Visibility;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Stump;                                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Click;                                                   // 0x0022(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMST[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnStumpAnimationFinish
	 */
	struct UUMG_LoginBonusListLine_C_OnStumpAnimationFinish_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Initialize
	 */
	struct UUMG_LoginBonusListLine_C_Initialize_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Finish
	 */
	struct UUMG_LoginBonusListLine_C_Finish_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnIconClick
	 */
	struct UUMG_LoginBonusListLine_C_OnIconClick_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ZV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_LoginBonusListLineItem_C*                       SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ExecuteUbergraph_UMG_LoginBonusListLine
	 */
	struct UUMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.IconClick__DelegateSignature
	 */
	struct UUMG_LoginBonusListLine_C_IconClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGKV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_LoginBonusListLineItem_C*                       SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.StumpAnimationFinish__DelegateSignature
	 */
	struct UUMG_LoginBonusListLine_C_StumpAnimationFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
