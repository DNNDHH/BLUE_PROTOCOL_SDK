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
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetNoEquipVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetNoEquipVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetBlankIconVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetBlankIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIMountImagineProfileVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetItemIconVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetItemIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetExpiryDateTimeVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetImagineUsedIconVisibility
	 */
	struct UMyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIsImagineUsed
	 */
	struct UMyCharaMenu_MountImagine_C_SetIsImagineUsed_Params
	{
	public:
		bool                                                       InIsUsed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.CreateInventoryData
	 */
	struct UMyCharaMenu_MountImagine_C_CreateInventoryData_Params
	{
	public:
		struct FSBCharacterMountImagineData                        InMountImagine;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FInventoryItemData                                  OutInventryItemData;                                     // 0x0028(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       OutIsEnable;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SY68[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.GetInventoryMountImagine
	 */
	struct UMyCharaMenu_MountImagine_C_GetInventoryMountImagine_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutEnabled;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PDR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterMountImagineData                        OutMountImagineData;                                     // 0x0018(0x0028)  (Parm, OutParm)
		bool                                                       OutIsUsed;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQ0A[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.Setup
	 */
	struct UMyCharaMenu_MountImagine_C_Setup_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagine_C_BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagine_C_BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.ExecuteUbergraph_MyCharaMenu_MountImagine
	 */
	struct UMyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C4O8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BtnMountImagineClicked__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagine_C_BtnMountImagineClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
