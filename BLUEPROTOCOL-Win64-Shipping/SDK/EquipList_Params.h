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
	 * Function EquipList.EquipList_C.SetOtherPCAccessoriesData
	 */
	struct UEquipList_C_SetOtherPCAccessoriesData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InAccessoriesData;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPlayerProfileMenuDetailCharaEquipInfo              InCharaEquipInfo;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipList.EquipList_C.SetOtherPCData
	 */
	struct UEquipList_C_SetOtherPCData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InEquipCostumesOwnItemInfoList;                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FOwnItemInfo>                                InEquipAccessoriesOwnItemInfoList;                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FOwnItemInfo>                                InEquipUnderwearOwnItemInfoList;                         // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPlayerProfileMenuDetailCharaEquipInfo              InCharaEquipInfo;                                        // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FOwnItemInfo                                        InEquipMountImagineOwnItemInfo;                          // 0x0040(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipList.EquipList_C.SetMountImagineData
	 */
	struct UEquipList_C_SetMountImagineData_Params
	{
	public:
		struct FOwnItemInfo                                        InMountImagine;                                          // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipList.EquipList_C.SetAccessoriesData
	 */
	struct UEquipList_C_SetAccessoriesData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InAccessoriesData;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipList.EquipList_C.SetUnderWearData
	 */
	struct UEquipList_C_SetUnderWearData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InUnderWearData;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipList.EquipList_C.SetCostumeData
	 */
	struct UEquipList_C_SetCostumeData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InCostumeData;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipList.EquipList_C.SetArmorData
	 */
	struct UEquipList_C_SetArmorData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InOwnItemList;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UArmorList_C*                                        InArmorList;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.SetData
	 */
	struct UEquipList_C_SetData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InCostumeOwnItemInfoList;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FOwnItemInfo>                                InUnderWearOwnItemInfoList;                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FOwnItemInfo>                                InAccesoriesOwnItemInfoList;                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        InMountImagine;                                          // 0x0030(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RH9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TE7F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_50DM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IMB5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRJN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQ2Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8NP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MVOV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MR5P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RNGJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9921[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PAYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MA41[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQRG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature
	 */
	struct UEquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    outItemIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6GO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.ExecuteUbergraph_EquipList
	 */
	struct UEquipList_C_ExecuteUbergraph_EquipList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipList.EquipList_C.OnClickedEquipList__DelegateSignature
	 */
	struct UEquipList_C_OnClickedEquipList__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutItemId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NEGY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
