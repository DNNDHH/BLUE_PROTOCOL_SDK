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
	 * Function WholeMapIcons.WholeMapIcons_C.AddNFTAreaIcon
	 */
	struct UWholeMapIcons_C_AddNFTAreaIcon_Params
	{
	public:
		class ABP_NFTArea_C*                                       NFTArea;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateNFTAreaIcon
	 */
	struct UWholeMapIcons_C_OnCreateNFTAreaIcon_Params
	{
	public:
		class USBMiniMapIcons*                                     InMiniMapIcons;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointDungeonIcon
	 */
	struct UWholeMapIcons_C_OnCreateWarpPointDungeonIcon_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PortalName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestNPCIcon
	 */
	struct UWholeMapIcons_C_OnCreateQuestNPCIcon_Params
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestIconType                                             QuestType;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestCategory2                                            QuestCategory;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FQDU[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HSDF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestChallenge
	 */
	struct UWholeMapIcons_C_OnCreateQuestChallenge_Params
	{
	public:
		ESBMiniMapIconType                                         IconType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VSBK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InLocation;                                              // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreatePublicDungeonIcon
	 */
	struct UWholeMapIcons_C_OnCreatePublicDungeonIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                RowName;                                                 // 0x0050(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0058(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C7U9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.AddNamedEnemyIcon
	 */
	struct UWholeMapIcons_C_AddNamedEnemyIcon_Params
	{
	public:
		class ASBEnemyCharacter*                                   InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBMapIcon*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateDungeonIcon
	 */
	struct UWholeMapIcons_C_OnCreateDungeonIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0050(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateRaidIcon
	 */
	struct UWholeMapIcons_C_OnCreateRaidIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0050(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.AddBuddyIcon
	 */
	struct UWholeMapIcons_C_AddBuddyIcon_Params
	{
	public:
		class ASBEnemyCharacter*                                   InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBMapIcon*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.AddInterruptQuestIcon
	 */
	struct UWholeMapIcons_C_AddInterruptQuestIcon_Params
	{
	public:
		class ASBInterruptQuestInstance*                           InInstance;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnDeletePartyMemberIcon
	 */
	struct UWholeMapIcons_C_OnDeletePartyMemberIcon_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreatePartyMemberIcon
	 */
	struct UWholeMapIcons_C_OnCreatePartyMemberIcon_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateFacilityIcon
	 */
	struct UWholeMapIcons_C_OnCreateFacilityIcon_Params
	{
	public:
		class FName                                                InProfileId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBFacilityType                                            InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B83E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterProfileLocationData                     InLocationData;                                          // 0x0010(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0058(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7BR[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestIcon
	 */
	struct UWholeMapIcons_C_OnCreateQuestIcon_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestAreaIcon
	 */
	struct UWholeMapIcons_C_OnCreateQuestAreaIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColor;                                                 // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointIcon
	 */
	struct UWholeMapIcons_C_OnCreateWarpPointIcon_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PortalName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.SetVisiblePinComment
	 */
	struct UWholeMapIcons_C_SetVisiblePinComment_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q5CC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreatePin
	 */
	struct UWholeMapIcons_C_OnCreatePin_Params
	{
	public:
		struct FMapPinInfo                                         MapPinInfo;                                              // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InWorldPosition;                                         // 0x0040(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JCQS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateCampIcon
	 */
	struct UWholeMapIcons_C_OnCreateCampIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZ60[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateFishingIcon
	 */
	struct UWholeMapIcons_C_OnCreateFishingIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WBAX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnCreateShortPin
	 */
	struct UWholeMapIcons_C_OnCreateShortPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.AddQuestIcon
	 */
	struct UWholeMapIcons_C_AddQuestIcon_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_47OK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.AddIcon
	 */
	struct UWholeMapIcons_C_AddIcon_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ZOrder;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AL82[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         IconWidget;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnUnbind
	 */
	struct UWholeMapIcons_C_OnUnbind_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnBind
	 */
	struct UWholeMapIcons_C_OnBind_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindQuest
	 */
	struct UWholeMapIcons_C_UnbindQuest_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnClassChangeNotify_Event_1
	 */
	struct UWholeMapIcons_C_OnClassChangeNotify_Event_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XF4S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnGetMyCharacterInfo_Event_1
	 */
	struct UWholeMapIcons_C_OnGetMyCharacterInfo_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindCommonComponent
	 */
	struct UWholeMapIcons_C_BindCommonComponent_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindCommonComponent
	 */
	struct UWholeMapIcons_C_UnbindCommonComponent_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnSaveQuestCheckList
	 */
	struct UWholeMapIcons_C_OnSaveQuestCheckList_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindStepList
	 */
	struct UWholeMapIcons_C_BindStepList_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindStepList
	 */
	struct UWholeMapIcons_C_UnbindStepList_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.CustomEvent_3
	 */
	struct UWholeMapIcons_C_CustomEvent_3_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindFieldStatus
	 */
	struct UWholeMapIcons_C_BindFieldStatus_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindFieldStatus
	 */
	struct UWholeMapIcons_C_UnbindFieldStatus_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.RequestCreateFieldStatus
	 */
	struct UWholeMapIcons_C_RequestCreateFieldStatus_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindPartyMember
	 */
	struct UWholeMapIcons_C_BindPartyMember_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMember
	 */
	struct UWholeMapIcons_C_UnbindPartyMember_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnPartyMemberUpdate_Event_1
	 */
	struct UWholeMapIcons_C_OnPartyMemberUpdate_Event_1_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindQuest
	 */
	struct UWholeMapIcons_C_BindQuest_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindPartyMemberOnSetDead
	 */
	struct UWholeMapIcons_C_BindPartyMemberOnSetDead_Params
	{
	public:
		class UIconPartyMember_C*                                  PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMemberOnSetDead
	 */
	struct UWholeMapIcons_C_UnbindPartyMemberOnSetDead_Params
	{
	public:
		class UIconPartyMember_C*                                  PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.CustomEvent_1
	 */
	struct UWholeMapIcons_C_CustomEvent_1_Params
	{
	public:
		class USBMapPartyMemberIcon*                               InPartyMemberIcon;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDead;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindOnInitMapPin
	 */
	struct UWholeMapIcons_C_UnbindOnInitMapPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindOnInitMapPin
	 */
	struct UWholeMapIcons_C_BindOnInitMapPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.OnInitMapPin
	 */
	struct UWholeMapIcons_C_OnInitMapPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindPin
	 */
	struct UWholeMapIcons_C_BindPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindPin
	 */
	struct UWholeMapIcons_C_UnbindPin_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.BindOnSaveMapPinInfos
	 */
	struct UWholeMapIcons_C_BindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.UnbindOnSaveMapPinInfos
	 */
	struct UWholeMapIcons_C_UnbindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.CustomEvent
	 */
	struct UWholeMapIcons_C_CustomEvent_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBMapErrorCode                                            ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapIcons.WholeMapIcons_C.ExecuteUbergraph_WholeMapIcons
	 */
	struct UWholeMapIcons_C_ExecuteUbergraph_WholeMapIcons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
