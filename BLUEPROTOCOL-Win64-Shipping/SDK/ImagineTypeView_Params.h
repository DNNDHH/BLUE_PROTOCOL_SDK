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
	 * Function ImagineTypeView.ImagineTypeView_C.SetChildBoxWidth
	 */
	struct UImagineTypeView_C_SetChildBoxWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.SetBoxWidth
	 */
	struct UImagineTypeView_C_SetBoxWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.Setinterval
	 */
	struct UImagineTypeView_C_Setinterval_Params
	{
	public:
		struct FSBMasterImagine                                    SBMasterImagine;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StackBNum;                                               // 0x00B8(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGJI[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParamByMaster
	 */
	struct UImagineTypeView_C_ApplyBattleImagineStackParamByMaster_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineMaster;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              StackBText;                                              // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineDataByMaster
	 */
	struct UImagineTypeView_C_ApplyBattleImagineDataByMaster_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineMaster;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.InitUIStackBMaxMode
	 */
	struct UImagineTypeView_C_InitUIStackBMaxMode_Params
	{	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyDataMaxStackB
	 */
	struct UImagineTypeView_C_ApplyDataMaxStackB_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7I1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.Set Diff Show
	 */
	struct UImagineTypeView_C_SetDiffShow_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParam
	 */
	struct UImagineTypeView_C_ApplyBattleImagineStackParam_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineMaster;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              StackBText;                                              // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FOwnItemInfo                                        Info;                                                    // 0x00C8(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineData
	 */
	struct UImagineTypeView_C_ApplyBattleImagineData_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyData
	 */
	struct UImagineTypeView_C_ApplyData_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.Set Development View
	 */
	struct UImagineTypeView_C_SetDevelopmentView_Params
	{	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyImagineParam
	 */
	struct UImagineTypeView_C_ApplyImagineParam_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineMaster;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Level;                                                   // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StackBNum;                                               // 0x00BC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyInnerImagineParam
	 */
	struct UImagineTypeView_C_ApplyInnerImagineParam_Params
	{
	public:
		struct FSBMasterImagine                                    MasterData;                                              // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Level;                                                   // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.SetEquipPosition
	 */
	struct UImagineTypeView_C_SetEquipPosition_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineData;                                             // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineParam
	 */
	struct UImagineTypeView_C_ApplyBattleImagineParam_Params
	{
	public:
		struct FSBMasterImagine                                    ImagineMaster;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.PreConstruct
	 */
	struct UImagineTypeView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.Construct
	 */
	struct UImagineTypeView_C_Construct_Params
	{	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.Set Enable Flat Style
	 */
	struct UImagineTypeView_C_SetEnableFlatStyle_Params
	{
	public:
		bool                                                       bEnableFlatStyle;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineTypeView.ImagineTypeView_C.ExecuteUbergraph_ImagineTypeView
	 */
	struct UImagineTypeView_C_ExecuteUbergraph_ImagineTypeView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
