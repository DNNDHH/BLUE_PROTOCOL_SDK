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
	 * Function MiniMapIcons.MiniMapIcons_C.Add NFTArea Icon
	 */
	struct UMiniMapIcons_C_AddNFTAreaIcon_Params
	{
	public:
		class ABP_NFTArea_C*                                       NFTArea;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateNFTAreaIcon
	 */
	struct UMiniMapIcons_C_OnCreateNFTAreaIcon_Params
	{
	public:
		class USBMiniMapIcons*                                     InMiniMapIcons;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointDungeonIcon
	 */
	struct UMiniMapIcons_C_OnCreateWarpPointDungeonIcon_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PortalName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateUpdraftIcon
	 */
	struct UMiniMapIcons_C_OnCreateUpdraftIcon_Params
	{
	public:
		class ASBUpdraft*                                          InUpdraft;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestNPCIcon
	 */
	struct UMiniMapIcons_C_OnCreateQuestNPCIcon_Params
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestIconType                                             QuestType;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestCategory2                                            QuestCategory;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNO6[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestChallenge
	 */
	struct UMiniMapIcons_C_OnCreateQuestChallenge_Params
	{
	public:
		ESBMiniMapIconType                                         IconType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CL63[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InLocation;                                              // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddIcon
	 */
	struct UMiniMapIcons_C_AddIcon_Params
	{
	public:
		class USBMiniMapIconBase*                                  InIconWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ZOrder;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6PG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBMiniMapIconBase*                                  IconWidget;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.DeleteDxBattleSupplierIcon
	 */
	struct UMiniMapIcons_C_DeleteDxBattleSupplierIcon_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleSupplier
	 */
	struct UMiniMapIcons_C_OnCreateDxBattleSupplier_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreatePublicDungeonIcon
	 */
	struct UMiniMapIcons_C_OnCreatePublicDungeonIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                RowName;                                                 // 0x0050(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0058(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateDungeonIcon
	 */
	struct UMiniMapIcons_C_OnCreateDungeonIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0050(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateRaidIcon
	 */
	struct UMiniMapIcons_C_OnCreateRaidIcon_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0050(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddBuddyIcon
	 */
	struct UMiniMapIcons_C_AddBuddyIcon_Params
	{
	public:
		class ASBEnemyCharacter*                                   InEnemyCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBMiniMapIconBase*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddNamedEnemyIcon
	 */
	struct UMiniMapIcons_C_AddNamedEnemyIcon_Params
	{
	public:
		class ASBEnemyCharacter*                                   InEnemyCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBMiniMapIconBase*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddEnemyIcon
	 */
	struct UMiniMapIcons_C_AddEnemyIcon_Params
	{
	public:
		class ASBEnemyCharacter*                                   InEnemyCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBMiniMapIconBase*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleGateBarrier
	 */
	struct UMiniMapIcons_C_OnCreateDxBattleGateBarrier_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddInterruptQuestIcon
	 */
	struct UMiniMapIcons_C_AddInterruptQuestIcon_Params
	{
	public:
		class ASBInterruptQuestInstance*                           InInstance;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateBuffNPCIcon
	 */
	struct UMiniMapIcons_C_OnCreateBuffNPCIcon_Params
	{
	public:
		class ASBFieldActorFreeBuffPoint*                          FreeBuffPoint;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateFacilityIcon
	 */
	struct UMiniMapIcons_C_OnCreateFacilityIcon_Params
	{
	public:
		class FName                                                InProfileId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBFacilityType                                            InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZBIC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterProfileLocationData                     InLocationData;                                          // 0x0010(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InLocation;                                              // 0x0058(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.DeleteEnemyGateIcon
	 */
	struct UMiniMapIcons_C_DeleteEnemyGateIcon_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestAreaIcon
	 */
	struct UMiniMapIcons_C_OnCreateQuestAreaIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRange;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAreaSize;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColor;                                                 // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnDeletePartyMemberIcon
	 */
	struct UMiniMapIcons_C_OnDeletePartyMemberIcon_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreatePartyMemberIcon
	 */
	struct UMiniMapIcons_C_OnCreatePartyMemberIcon_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateShortPin
	 */
	struct UMiniMapIcons_C_OnCreateShortPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateCarryBases
	 */
	struct UMiniMapIcons_C_OnCreateCarryBases_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateCarrys
	 */
	struct UMiniMapIcons_C_OnCreateCarrys_Params
	{
	public:
		class ASBCarry*                                            InCarry;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateEnemyGate
	 */
	struct UMiniMapIcons_C_OnCreateEnemyGate_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointIcon
	 */
	struct UMiniMapIcons_C_OnCreateWarpPointIcon_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PortalName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreatePin
	 */
	struct UMiniMapIcons_C_OnCreatePin_Params
	{
	public:
		struct FMapPinInfo                                         MapPinInfo;                                              // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             InWorldPosition;                                         // 0x0040(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q0DF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateClimbIcon
	 */
	struct UMiniMapIcons_C_OnCreateClimbIcon_Params
	{
	public:
		class ASBClimbPoint*                                       InClimbPoint;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateFishingIcon
	 */
	struct UMiniMapIcons_C_OnCreateFishingIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateCampIcon
	 */
	struct UMiniMapIcons_C_OnCreateCampIcon_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8I8G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateEngramCannon
	 */
	struct UMiniMapIcons_C_OnCreateEngramCannon_Params
	{
	public:
		class ASBEngramCannon*                                     EngramCannon;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnUnbind
	 */
	struct UMiniMapIcons_C_OnUnbind_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnBind
	 */
	struct UMiniMapIcons_C_OnBind_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.DebugPrint
	 */
	struct UMiniMapIcons_C_DebugPrint_Params
	{
	public:
		class FString                                              InStr;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.GetPartyMemberIconPriority
	 */
	struct UMiniMapIcons_C_GetPartyMemberIconPriority_Params
	{
	public:
		class ASBPlayerState*                                      InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutPriority;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestIcon
	 */
	struct UMiniMapIcons_C_OnCreateQuestIcon_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.AddQuestIcon
	 */
	struct UMiniMapIcons_C_AddQuestIcon_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckDisplayOutOfRange;                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WYYP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.CustomEvent_1
	 */
	struct UMiniMapIcons_C_CustomEvent_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBMapErrorCode                                            ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindPartyMember
	 */
	struct UMiniMapIcons_C_BindPartyMember_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnPartyMemberUpdate_Event_1
	 */
	struct UMiniMapIcons_C_OnPartyMemberUpdate_Event_1_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMember
	 */
	struct UMiniMapIcons_C_UnbindPartyMember_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindPartyMemberOnSetDead
	 */
	struct UMiniMapIcons_C_BindPartyMemberOnSetDead_Params
	{
	public:
		class UMiniMapIconPartyMember_C*                           PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMemberOnSetDead
	 */
	struct UMiniMapIcons_C_UnbindPartyMemberOnSetDead_Params
	{
	public:
		class UMiniMapIconPartyMember_C*                           PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.CustomEvent_2
	 */
	struct UMiniMapIcons_C_CustomEvent_2_Params
	{
	public:
		class UMiniMapIconPartyMember_C*                           PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDead;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindQuest
	 */
	struct UMiniMapIcons_C_BindQuest_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnAcceptQuestDelegate_Event_1
	 */
	struct UMiniMapIcons_C_OnAcceptQuestDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAcceptedQuestErrorCode                                    ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79BI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  AcceptedQuestInfo;                                       // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindOnSaveMapPinInfos
	 */
	struct UMiniMapIcons_C_BindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnAcceptedQuestListDelegete_Event_1
	 */
	struct UMiniMapIcons_C_OnAcceptedQuestListDelegete_Event_1_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCancelQuestDelegate_Event_1
	 */
	struct UMiniMapIcons_C_OnCancelQuestDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MQTQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnCompleteQuestDelegate_Event_1
	 */
	struct UMiniMapIcons_C_OnCompleteQuestDelegate_Event_1_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestCompleteResult                                       CompleteResult;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C42U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMailRewardData                                   MailRewardData;                                          // 0x0010(0x0180)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnUpdateQuestProgressDelegate_Event_1
	 */
	struct UMiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQQP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnQuestListDelegete_Event_1
	 */
	struct UMiniMapIcons_C_OnQuestListDelegete_Event_1_Params
	{
	public:
		TArray<struct FUnlockedQuestInfo>                          QuestList;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnInitMapPin
	 */
	struct UMiniMapIcons_C_OnInitMapPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindQuest
	 */
	struct UMiniMapIcons_C_UnbindQuest_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindPin
	 */
	struct UMiniMapIcons_C_UnbindPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindPin
	 */
	struct UMiniMapIcons_C_BindPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindOnInitMapPin
	 */
	struct UMiniMapIcons_C_BindOnInitMapPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindOnInitMapPin
	 */
	struct UMiniMapIcons_C_UnbindOnInitMapPin_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnClassChangeNotify_Event_1
	 */
	struct UMiniMapIcons_C_OnClassChangeNotify_Event_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CSKH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnGetMyCharacterInfo_Event_1
	 */
	struct UMiniMapIcons_C_OnGetMyCharacterInfo_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindCommonComponent
	 */
	struct UMiniMapIcons_C_BindCommonComponent_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindCommonComponent
	 */
	struct UMiniMapIcons_C_UnbindCommonComponent_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.OnSaveQuestCheckList
	 */
	struct UMiniMapIcons_C_OnSaveQuestCheckList_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindStepList
	 */
	struct UMiniMapIcons_C_BindStepList_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindStepList
	 */
	struct UMiniMapIcons_C_UnbindStepList_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.CustomEvent_3
	 */
	struct UMiniMapIcons_C_CustomEvent_3_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindOnSaveMapPinInfos
	 */
	struct UMiniMapIcons_C_UnbindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.BindFieldStatus
	 */
	struct UMiniMapIcons_C_BindFieldStatus_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.UnbindFieldStatus
	 */
	struct UMiniMapIcons_C_UnbindFieldStatus_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.CustomEvent_4
	 */
	struct UMiniMapIcons_C_CustomEvent_4_Params
	{	};

	/**
	 * Function MiniMapIcons.MiniMapIcons_C.ExecuteUbergraph_MiniMapIcons
	 */
	struct UMiniMapIcons_C_ExecuteUbergraph_MiniMapIcons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
