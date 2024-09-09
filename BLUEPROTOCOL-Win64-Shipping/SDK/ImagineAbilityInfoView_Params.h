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
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfoByOwnItemInfo
	 */
	struct UImagineAbilityInfoView_C_SetupAbilityInfoByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ShowChange
	 */
	struct UImagineAbilityInfoView_C_ShowChange_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.GetAbilityPartsValueText
	 */
	struct UImagineAbilityInfoView_C_GetAbilityPartsValueText_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfo
	 */
	struct UImagineAbilityInfoView_C_SetupAbilityInfo_Params
	{
	public:
		int32_t                                                    InAbilityEffectId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.CreateEfficacyInfoItemList
	 */
	struct UImagineAbilityInfoView_C_CreateEfficacyInfoItemList_Params
	{	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.PreConstruct
	 */
	struct UImagineAbilityInfoView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.Construct
	 */
	struct UImagineAbilityInfoView_C_Construct_Params
	{	};

	/**
	 * Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ExecuteUbergraph_ImagineAbilityInfoView
	 */
	struct UImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
