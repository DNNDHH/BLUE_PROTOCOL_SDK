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
	 * Function ItemIconBtn.ItemIconBtn_C.SetPickup
	 */
	struct UItemIconBtn_C_SetPickup_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetAmountVisibility
	 */
	struct UItemIconBtn_C_SetAmountVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetAmount2Visibility
	 */
	struct UItemIconBtn_C_SetAmount2Visibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetRewardData
	 */
	struct UItemIconBtn_C_SetRewardData_Params
	{
	public:
		ESBRewardItemType                                          InRewardType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EA8E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLimitedTime;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Icon Grp Visible
	 */
	struct UItemIconBtn_C_SetIconGrpVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetScrollParameter
	 */
	struct UItemIconBtn_C_SetScrollParameter_Params
	{
	public:
		float                                                      BaseSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OverSize;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Scroll Visible
	 */
	struct UItemIconBtn_C_SetScrollVisible_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Swap Scroll Visible
	 */
	struct UItemIconBtn_C_SetSwapScrollVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetSetLockIconVisibility
	 */
	struct UItemIconBtn_C_SetSetLockIconVisibility_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageNumber;                                         // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JVOB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetNewBadgeVisibleByReaded
	 */
	struct UItemIconBtn_C_SetNewBadgeVisibleByReaded_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XOE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetImagineDetailData
	 */
	struct UItemIconBtn_C_SetImagineDetailData_Params
	{
	public:
		struct FInventoryItemData                                  InItemData;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InUseDetailedTooltip;                                    // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InHiddenLockIcon;                                        // 0x0061(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InHiddenAmout;                                           // 0x0062(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsUnidentified;                                        // 0x0063(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InLimitedTime;                                           // 0x0064(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InStackBEffectiveDisplay;                                // 0x0065(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInUseClassTypeForLevelSync;                             // 0x0066(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassTypeForLevelSync;                                 // 0x0067(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.GetCommonIcon
	 */
	struct UItemIconBtn_C_GetCommonIcon_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RY3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommonIcon_C*                                       OutCommonIcon;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIconWeapon
	 */
	struct UItemIconBtn_C_SetIconWeapon_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDetailsMode;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MJW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InItemUniqueId;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageNumber;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetImagineDetail_Index
	 */
	struct UItemIconBtn_C_SetImagineDetail_Index_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZSFS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetWeaponDetail_Index
	 */
	struct UItemIconBtn_C_SetWeaponDetail_Index_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KMV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InItemUniqueId;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetLimitedTimeIconVisibility
	 */
	struct UItemIconBtn_C_SetLimitedTimeIconVisibility_Params
	{
	public:
		struct FInventoryItemData                                  InInventoryItemData;                                     // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Select Num
	 */
	struct UItemIconBtn_C_SetSelectNum_Params
	{
	public:
		int32_t                                                    Nu;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Costume Index
	 */
	struct UItemIconBtn_C_SetCostumeIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetSelectItemUniqueID
	 */
	struct UItemIconBtn_C_SetSelectItemUniqueID_Params
	{
	public:
		class FString                                              InventoryItemDataUniqueId;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EItemType                                                  InventoryItemDataItemType;                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HM7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.GetSelectItemUniqueID
	 */
	struct UItemIconBtn_C_GetSelectItemUniqueID_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.GetInventoryMountImagine
	 */
	struct UItemIconBtn_C_GetInventoryMountImagine_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBCharacterMountImagineData                        OutParameter;                                            // 0x0010(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetMImagineRarity
	 */
	struct UItemIconBtn_C_SetMImagineRarity_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.IsItemLockIconDraw
	 */
	struct UItemIconBtn_C_IsItemLockIconDraw_Params
	{
	public:
		struct FInventoryItemData                                  InInventoryItemData;                                     // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       HiddenLockIcon;                                          // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutLockFlag;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_Ornament
	 */
	struct UItemIconBtn_C_SetIcon_Ornament_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsUnidentified;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_MountImagine
	 */
	struct UItemIconBtn_C_SetIcon_MountImagine_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_Costume
	 */
	struct UItemIconBtn_C_SetIcon_Costume_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSXT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_Item
	 */
	struct UItemIconBtn_C_SetIcon_Item_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsUnidentified;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LH5A[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_Weapon
	 */
	struct UItemIconBtn_C_SetIcon_Weapon_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InUseWeaponTooltip;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIcon_Imagine
	 */
	struct UItemIconBtn_C_SetIcon_Imagine_Params
	{
	public:
		bool                                                       InIsLockFlagDraw;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsUseDetailsTooltip;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInUseClassTypeForLevelSync;                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassTypeForLevelSync;                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetGrayMode
	 */
	struct UItemIconBtn_C_SetGrayMode_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.AnimInOutPlay
	 */
	struct UItemIconBtn_C_AnimInOutPlay_Params
	{
	public:
		bool                                                       bInAnim;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BLGG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetRightClickAccept
	 */
	struct UItemIconBtn_C_SetRightClickAccept_Params
	{
	public:
		bool                                                       bIsRightClickAccept;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetImagineSimpleTooltip
	 */
	struct UItemIconBtn_C_SetImagineSimpleTooltip_Params
	{
	public:
		bool                                                       IsImagineSimpleTooltip;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetRarity
	 */
	struct UItemIconBtn_C_SetRarity_Params
	{
	public:
		ESBRarity                                                  InRarity;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.GetEquipIconVisibility
	 */
	struct UItemIconBtn_C_GetEquipIconVisibility_Params
	{
	public:
		bool                                                       OutIsEquipIconVisible;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetEquipIconVisibility
	 */
	struct UItemIconBtn_C_SetEquipIconVisibility_Params
	{
	public:
		bool                                                       InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetDragable
	 */
	struct UItemIconBtn_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnPreviewMouseButtonDown
	 */
	struct UItemIconBtn_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnDragDetected
	 */
	struct UItemIconBtn_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetHoveredColor
	 */
	struct UItemIconBtn_C_SetHoveredColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetHoveredSoundId
	 */
	struct UItemIconBtn_C_SetHoveredSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetPressedSoundId
	 */
	struct UItemIconBtn_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIsButtonActive
	 */
	struct UItemIconBtn_C_SetIsButtonActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetTooltipEnable
	 */
	struct UItemIconBtn_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.Set Enable
	 */
	struct UItemIconBtn_C_SetEnable_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIconBlank
	 */
	struct UItemIconBtn_C_SetIconBlank_Params
	{
	public:
		bool                                                       IsBlank;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetDetach
	 */
	struct UItemIconBtn_C_SetDetach_Params
	{
	public:
		bool                                                       IsDetach;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetIconSelected
	 */
	struct UItemIconBtn_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.IsIconEmpty
	 */
	struct UItemIconBtn_C_IsIconEmpty_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.ResetEmpty
	 */
	struct UItemIconBtn_C_ResetEmpty_Params
	{	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetEmpty
	 */
	struct UItemIconBtn_C_SetEmpty_Params
	{	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetWeapon_Index
	 */
	struct UItemIconBtn_C_SetWeapon_Index_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetMountImagine
	 */
	struct UItemIconBtn_C_SetMountImagine_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetImagine_Index
	 */
	struct UItemIconBtn_C_SetImagine_Index_Params
	{
	public:
		int32_t                                                    InImagineItemId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetItem_Index
	 */
	struct UItemIconBtn_C_SetItem_Index_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InItemAmount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLimitedTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.SetItem_InventoryData
	 */
	struct UItemIconBtn_C_SetItem_InventoryData_Params
	{
	public:
		struct FInventoryItemData                                  InItemData;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InUseDetailsTooltip;                                     // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HiddenLockIcon;                                          // 0x0061(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HiddenAmout;                                             // 0x0062(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnidentified;                                          // 0x0063(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLimitedTime;                                            // 0x0064(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StackBEffectiveDisplay;                                  // 0x0065(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.BP_OnEntryReleased
	 */
	struct UItemIconBtn_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.BP_OnItemExpansionChanged
	 */
	struct UItemIconBtn_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.BP_OnItemSelectionChanged
	 */
	struct UItemIconBtn_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnListItemObjectSet
	 */
	struct UItemIconBtn_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.ExecuteUbergraph_ItemIconBtn
	 */
	struct UItemIconBtn_C_ExecuteUbergraph_ItemIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7Q3T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnPressed__DelegateSignature
	 */
	struct UItemIconBtn_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnSelectRight__DelegateSignature
	 */
	struct UItemIconBtn_C_OnSelectRight__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemIconBtn.ItemIconBtn_C.OnSelect__DelegateSignature
	 */
	struct UItemIconBtn_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
