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
	 * Function MapWidget_Map.MapWidget_Map_C.SetPinMode
	 */
	struct UMapWidget_Map_C_SetPinMode_Params
	{
	public:
		bool                                                       IsPinSelected;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_233Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.DebugQuestInfoPrint
	 */
	struct UMapWidget_Map_C_DebugQuestInfoPrint_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPriority;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Get Quest Category 2Name
	 */
	struct UMapWidget_Map_C_GetQuestCategory2Name_Params
	{
	public:
		EQuestCategory2                                            InCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HNB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Get Portal to Location
	 */
	struct UMapWidget_Map_C_GetPortaltoLocation_Params
	{
	public:
		class FString                                              InPortalName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutLocationName;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetNamedEnemyLevelColor
	 */
	struct UMapWidget_Map_C_GetNamedEnemyLevelColor_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_080L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         OutColor;                                                // 0x0008(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnPressed_QuestIcon
	 */
	struct UMapWidget_Map_C_OnPressed_QuestIcon_Params
	{
	public:
		int32_t                                                    InQuestId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIconEx
	 */
	struct UMapWidget_Map_C_ClearWarpPointIconEx_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPointEx
	 */
	struct UMapWidget_Map_C_UpdateWarpPointEx_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.HideDialog
	 */
	struct UMapWidget_Map_C_HideDialog_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.DeleteDialog
	 */
	struct UMapWidget_Map_C_DeleteDialog_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateDialog
	 */
	struct UMapWidget_Map_C_CreateDialog_Params
	{
	public:
		class UBP_Dialog_C*                                        OutputPin;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateMapPlaceNamePlate
	 */
	struct UMapWidget_Map_C_UpdateMapPlaceNamePlate_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetLoadData
	 */
	struct UMapWidget_Map_C_GetLoadData_Params
	{
	public:
		struct FSBMapBGConfigTableRow                              LoadData;                                                // 0x0000(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetAreaMapPinMax
	 */
	struct UMapWidget_Map_C_GetAreaMapPinMax_Params
	{
	public:
		int32_t                                                    AreaMapPinMax;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.IsWorldMapFlag
	 */
	struct UMapWidget_Map_C_IsWorldMapFlag_Params
	{
	public:
		bool                                                       IsWorldMap;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetWorldMapFlag
	 */
	struct UMapWidget_Map_C_SetWorldMapFlag_Params
	{
	public:
		bool                                                       IsWorldMap;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnRaidPortalClose
	 */
	struct UMapWidget_Map_C_OnRaidPortalClose_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_065Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMapWidget_TimeSymbolIcon_C*                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnPressed_WarpPointIcon
	 */
	struct UMapWidget_Map_C_OnPressed_WarpPointIcon_Params
	{
	public:
		class UMapWidget_WarpPointIcon_C*                          InWarpPointIcon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnPressed_RegionIcon
	 */
	struct UMapWidget_Map_C_OnPressed_RegionIcon_Params
	{
	public:
		class FString                                              InRegionMapId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateCanvasScale
	 */
	struct UMapWidget_Map_C_UpdateCanvasScale_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.PublicDungeon_DirectWarpCheck
	 */
	struct UMapWidget_Map_C_PublicDungeon_DirectWarpCheck_Params
	{
	public:
		class FName                                                DungeonId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_94BO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.LocationIconVisibleCheck
	 */
	struct UMapWidget_Map_C_LocationIconVisibleCheck_Params
	{
	public:
		class FName                                                LocationId;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGD6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateCampPointIcon
	 */
	struct UMapWidget_Map_C_UpdateCampPointIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearCampPointIcon
	 */
	struct UMapWidget_Map_C_ClearCampPointIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.FindQuestAreaIcon
	 */
	struct UMapWidget_Map_C_FindQuestAreaIcon_Params
	{
	public:
		struct FSBMiniMapQuestAreaConfig                           TargetData;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FSBMiniMapQuestAreaConfig>                   RefList;                                                 // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    TopIndex;                                                // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YB38[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            FindIndex;                                               // 0x0058(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateChallengeQuestIcon
	 */
	struct UMapWidget_Map_C_CreateChallengeQuestIcon_Params
	{
	public:
		struct FSBCharacterProfileData                             ProfileData;                                             // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    LocationIndex;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBFacilityType                                            FacilityType;                                            // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.TimeIconSetting
	 */
	struct UMapWidget_Map_C_TimeIconSetting_Params
	{
	public:
		class UWidget*                                             IconWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMapWidget_CommonSymbolIcon_C*                       TargetPosWidget;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Prio;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_80JR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestAreaIcon
	 */
	struct UMapWidget_Map_C_UpdateInterruptQuestAreaIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptQuestAreaIcon
	 */
	struct UMapWidget_Map_C_RemoveInterruptQuestAreaIcon_Params
	{
	public:
		class ASBInterruptQuestInstance*                           QuestInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.AddInterruptQuestAreaIcon
	 */
	struct UMapWidget_Map_C_AddInterruptQuestAreaIcon_Params
	{
	public:
		class ASBInterruptQuestInstance*                           QuestInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CalcAreaIconSize
	 */
	struct UMapWidget_Map_C_CalcAreaIconSize_Params
	{
	public:
		class FName                                                MapId;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UIconQuestArea_C*                                    AreaWidget;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateQuestAreaIcon
	 */
	struct UMapWidget_Map_C_UpdateQuestAreaIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearQuestAreaIcon
	 */
	struct UMapWidget_Map_C_ClearQuestAreaIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetResearchTeamList
	 */
	struct UMapWidget_Map_C_SetResearchTeamList_Params
	{
	public:
		TArray<struct FSBResearchTeamData>                         InList;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearResearchTeamSymbolIcon
	 */
	struct UMapWidget_Map_C_ClearResearchTeamSymbolIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateResearchTeamSymbolIcon
	 */
	struct UMapWidget_Map_C_CreateResearchTeamSymbolIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.RecalculateMapPlaceNamePlatePositions
	 */
	struct UMapWidget_Map_C_RecalculateMapPlaceNamePlatePositions_Params
	{
	public:
		struct FVector2D                                           InMapImageSize;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InMapId;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupMapPlaceNamePlates
	 */
	struct UMapWidget_Map_C_SetupMapPlaceNamePlates_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateNamedEnemyIcon
	 */
	struct UMapWidget_Map_C_UpdateNamedEnemyIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearNamedEnemyIcon
	 */
	struct UMapWidget_Map_C_ClearNamedEnemyIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateNamedEnemyIcon
	 */
	struct UMapWidget_Map_C_CreateNamedEnemyIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.TraverseCloudUpdate
	 */
	struct UMapWidget_Map_C_TraverseCloudUpdate_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Floor;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.IsDisplayQuestIconStandby
	 */
	struct UMapWidget_Map_C_IsDisplayQuestIconStandby_Params
	{
	public:
		EQuestCategory2                                            QuestCategory2;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisplay;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.getQuestIconZOrder
	 */
	struct UMapWidget_Map_C_getQuestIconZOrder_Params
	{
	public:
		EQuestCategory2                                            Category2;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestStatus                                               Status;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2R8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestIcon
	 */
	struct UMapWidget_Map_C_UpdateInterruptQuestIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearInterruptQuestIcon
	 */
	struct UMapWidget_Map_C_ClearInterruptQuestIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateInterruptQuestIcon
	 */
	struct UMapWidget_Map_C_CreateInterruptQuestIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdatePlayerIcon
	 */
	struct UMapWidget_Map_C_UpdatePlayerIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupPlayerIcon
	 */
	struct UMapWidget_Map_C_SetupPlayerIcon_Params
	{
	public:
		bool                                                       IsIconVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TQY9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetWarpConfirmationTextIdx
	 */
	struct UMapWidget_Map_C_GetWarpConfirmationTextIdx_Params
	{
	public:
		int32_t                                                    TextIdx;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetWarpPointDataFromName
	 */
	struct UMapWidget_Map_C_GetWarpPointDataFromName_Params
	{
	public:
		class FString                                              InWarpPointName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6E9Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMasterWarpPoint                                  OutWarpPointData;                                        // 0x0018(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.DoWarpFromWarpBox
	 */
	struct UMapWidget_Map_C_DoWarpFromWarpBox_Params
	{
	public:
		struct FSBMasterWarpPoint                                  InWarpPointData;                                         // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigRowName
	 */
	struct UMapWidget_Map_C_GetMapBGConfigRowName_Params
	{
	public:
		struct FSBMapBGConfigTableRow                              InMagBGConfig;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OutIsValid;                                              // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6O89[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutRowName;                                              // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CheckIfWarpDestIsAbsoluteFree_ForAlpha
	 */
	struct UMapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha_Params
	{
	public:
		struct FWarpPointMasterData                                InWarpPointMasterData;                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsAbsoluteFree;                                          // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_23X9[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CalcPinPosition
	 */
	struct UMapWidget_Map_C_CalcPinPosition_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPin;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMapPinInfo                                         InMapPinInfo;                                            // 0x0008(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromPinId
	 */
	struct UMapWidget_Map_C_GetMapPinInfoFromPinId_Params
	{
	public:
		int32_t                                                    inPinId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6D0G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMapPinInfo                                         OutMapPinInfo;                                           // 0x0008(0x0040)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoList
	 */
	struct UMapWidget_Map_C_GetMapPinInfoList_Params
	{
	public:
		TArray<struct FMapPinInfo>                                 MapPinInfoList;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetPinnedPinCnd
	 */
	struct UMapWidget_Map_C_GetPinnedPinCnd_Params
	{
	public:
		int32_t                                                    PinnedPinCnt;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.IsEnablePinIcon
	 */
	struct UMapWidget_Map_C_IsEnablePinIcon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GRG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetVacantAreaMapPin
	 */
	struct UMapWidget_Map_C_GetVacantAreaMapPin_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           OutPinRef;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPinVacant;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearQuestIcon
	 */
	struct UMapWidget_Map_C_ClearQuestIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateOtherSymbolIcon
	 */
	struct UMapWidget_Map_C_UpdateOtherSymbolIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearOtherSymbolIcon
	 */
	struct UMapWidget_Map_C_ClearOtherSymbolIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateTimeSymbolIcon
	 */
	struct UMapWidget_Map_C_CreateTimeSymbolIcon_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGPN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterProfileLocationData                     LocationData;                                            // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UMapWidget_CommonSymbolIcon_C*                       TargetPosWidget;                                         // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPriority;                                              // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateCommonSymbolIcon
	 */
	struct UMapWidget_Map_C_CreateCommonSymbolIcon_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Prio;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Pos;                                                     // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N17A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TooltipString;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AYW6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToLocation
	 */
	struct UMapWidget_Map_C_CreateOtherSymbolIconToLocation_Params
	{
	public:
		struct FSBLocationInfo                                     LocationInfo;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                RowName;                                                 // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToProfile
	 */
	struct UMapWidget_Map_C_CreateOtherSymbolIconToProfile_Params
	{
	public:
		struct FSBCharacterProfileData                             CharcterProfile;                                         // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OtherSymbolIconSetting
	 */
	struct UMapWidget_Map_C_OtherSymbolIconSetting_Params
	{
	public:
		class UMapWidget_CommonSymbolIcon_C*                       IconWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Prio;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Pos;                                                     // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateQuestIcon
	 */
	struct UMapWidget_Map_C_UpdateQuestIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.InitPlayerIcon
	 */
	struct UMapWidget_Map_C_InitPlayerIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.HidePartyMemberIcon
	 */
	struct UMapWidget_Map_C_HidePartyMemberIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdatePartyMemberIcon
	 */
	struct UMapWidget_Map_C_UpdatePartyMemberIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearPartyMemberIcon
	 */
	struct UMapWidget_Map_C_ClearPartyMemberIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreatePartyMemberIcon
	 */
	struct UMapWidget_Map_C_CreatePartyMemberIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.PlayAnimOut
	 */
	struct UMapWidget_Map_C_PlayAnimOut_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.PlayAnimIn
	 */
	struct UMapWidget_Map_C_PlayAnimIn_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.FindPinInfoByPinIndex
	 */
	struct UMapWidget_Map_C_FindPinInfoByPinIndex_Params
	{
	public:
		TArray<struct FMapPinInfo>                                 InPinInfoList;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FMapPinInfo                                         InTargetPinInfo;                                         // 0x0010(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMapPinInfo                                         OutPinInfo;                                              // 0x0050(0x0040)  (Parm, OutParm)
		bool                                                       OutResult;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T1MF[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.PrintMapPinInfoList
	 */
	struct UMapWidget_Map_C_PrintMapPinInfoList_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.DoErasePinnedPin
	 */
	struct UMapWidget_Map_C_DoErasePinnedPin_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.DoSavePinInfo
	 */
	struct UMapWidget_Map_C_DoSavePinInfo_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ResetInputMode;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.IsSavingMapPinInfo
	 */
	struct UMapWidget_Map_C_IsSavingMapPinInfo_Params
	{
	public:
		bool                                                       IsSavingMapPinInfo;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetSavingMapPinInfo
	 */
	struct UMapWidget_Map_C_SetSavingMapPinInfo_Params
	{
	public:
		bool                                                       IsSavingMapPinInfo;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromBoxIndex
	 */
	struct UMapWidget_Map_C_GetMapPinInfoFromBoxIndex_Params
	{
	public:
		int32_t                                                    inPinId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2NT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMapPinInfo                                         OutMapPinInfo;                                           // 0x0008(0x0040)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateComboBoxPinList
	 */
	struct UMapWidget_Map_C_UpdateComboBoxPinList_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClosePinnedPinCommentBox
	 */
	struct UMapWidget_Map_C_ClosePinnedPinCommentBox_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OpenPinnedPinCommentBox
	 */
	struct UMapWidget_Map_C_OpenPinnedPinCommentBox_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetMapToPinAttachMode
	 */
	struct UMapWidget_Map_C_SetMapToPinAttachMode_Params
	{
	public:
		bool                                                       IsAttachMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.AttachPinToMap
	 */
	struct UMapWidget_Map_C_AttachPinToMap_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InMapPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMapPinInfo                                         InMapPinInfo;                                            // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTextBoxVisible;                                        // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZAVK[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetPinToMap
	 */
	struct UMapWidget_Map_C_SetPinToMap_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPinRef;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateMapWidgetMapPinnedPin
	 */
	struct UMapWidget_Map_C_CreateMapWidgetMapPinnedPin_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearCurrentAreaMapPinnedPin
	 */
	struct UMapWidget_Map_C_ClearCurrentAreaMapPinnedPin_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateCurrentAreaMapPinnedPin
	 */
	struct UMapWidget_Map_C_CreateCurrentAreaMapPinnedPin_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearWorldMapPinnedPin
	 */
	struct UMapWidget_Map_C_ClearWorldMapPinnedPin_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CreateWorldMapPinnedPin
	 */
	struct UMapWidget_Map_C_CreateWorldMapPinnedPin_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.InitPinInfo
	 */
	struct UMapWidget_Map_C_InitPinInfo_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromMapId
	 */
	struct UMapWidget_Map_C_GetMapBGConfigFromMapId_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBMapBGConfigTableRow                              OutMapBGConfig;                                          // 0x0010(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromIndex
	 */
	struct UMapWidget_Map_C_GetMapBGConfigFromIndex_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LE25[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMapBGConfigTableRow                              OutMapBGConfig;                                          // 0x0008(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapBodyPosition
	 */
	struct UMapWidget_Map_C_GetMapBodyPosition_Params
	{
	public:
		struct FVector2D                                           OutPosition;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetMapBodyPosition
	 */
	struct UMapWidget_Map_C_SetMapBodyPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.GetMapBodySize
	 */
	struct UMapWidget_Map_C_GetMapBodySize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetMapBodySize
	 */
	struct UMapWidget_Map_C_SetMapBodySize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CalcWorldPosition
	 */
	struct UMapWidget_Map_C_CalcWorldPosition_Params
	{
	public:
		struct FVector2D                                           MapLocation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           WorldLocation;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.CalcMapPosition
	 */
	struct UMapWidget_Map_C_CalcMapPosition_Params
	{
	public:
		struct FVector2D                                           WorldLocation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MapLocation;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPoint
	 */
	struct UMapWidget_Map_C_UpdateWarpPoint_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIcon
	 */
	struct UMapWidget_Map_C_ClearWarpPointIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetWorldMapTexture
	 */
	struct UMapWidget_Map_C_SetWorldMapTexture_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupAsRegionMap
	 */
	struct UMapWidget_Map_C_SetupAsRegionMap_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsPlayerCursorVisible;                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5UU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupAsWorldMap
	 */
	struct UMapWidget_Map_C_SetupAsWorldMap_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupMap
	 */
	struct UMapWidget_Map_C_SetupMap_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsPlayerCursorVisible;                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetRegionMapTexture
	 */
	struct UMapWidget_Map_C_SetRegionMapTexture_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ClearIcon
	 */
	struct UMapWidget_Map_C_ClearIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UpdateTimerEvent
	 */
	struct UMapWidget_Map_C_UpdateTimerEvent_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ResetTimerEvent
	 */
	struct UMapWidget_Map_C_ResetTimerEvent_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupTimerEvent
	 */
	struct UMapWidget_Map_C_SetupTimerEvent_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupIcon
	 */
	struct UMapWidget_Map_C_SetupIcon_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Close
	 */
	struct UMapWidget_Map_C_Close_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Setup
	 */
	struct UMapWidget_Map_C_Setup_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Terminate
	 */
	struct UMapWidget_Map_C_Terminate_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Initialize
	 */
	struct UMapWidget_Map_C_Initialize_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8
	 */
	struct UMapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.SetupInterruptQuest
	 */
	struct UMapWidget_Map_C_SetupInterruptQuest_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.AddInterruptArea
	 */
	struct UMapWidget_Map_C_AddInterruptArea_Params
	{
	public:
		class ASBInterruptQuestInstance*                           InInstance;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptArea
	 */
	struct UMapWidget_Map_C_RemoveInterruptArea_Params
	{
	public:
		class ASBInterruptQuestInstance*                           InInstance;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ResetInterruptQuest
	 */
	struct UMapWidget_Map_C_ResetInterruptQuest_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnSaveMapPinInfosDelegate_イベント
	 */
	struct UMapWidget_Map_C_OnSaveMapPinInfosDelegate__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBMapErrorCode                                            ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnTextCommitted_イベント
	 */
	struct UMapWidget_Map_C_OnTextCommitted__Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnPinBtnClicked_イベント
	 */
	struct UMapWidget_Map_C_OnPinBtnClicked__Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.BindPin
	 */
	struct UMapWidget_Map_C_BindPin_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UnbindPin
	 */
	struct UMapWidget_Map_C_UnbindPin_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.BindOnSaveMapPinInfos
	 */
	struct UMapWidget_Map_C_BindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.UnbindOnSaveMapPinInfos
	 */
	struct UMapWidget_Map_C_UnbindOnSaveMapPinInfos_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_Map_C_BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.InitAdminBtn
	 */
	struct UMapWidget_Map_C_InitAdminBtn_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Construct
	 */
	struct UMapWidget_Map_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.Destruct
	 */
	struct UMapWidget_Map_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnEndYesNoDialog
	 */
	struct UMapWidget_Map_C_OnEndYesNoDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_Map_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.PreConstruct
	 */
	struct UMapWidget_Map_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.InitMapBG
	 */
	struct UMapWidget_Map_C_InitMapBG_Params
	{
	public:
		struct FSBMapBGConfigTableRow                              InMapBGConfig;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InMapId;                                                 // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UMapWidget_Map_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.EventCreateDialog
	 */
	struct UMapWidget_Map_C_EventCreateDialog_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OpenQuestMenu
	 */
	struct UMapWidget_Map_C_OpenQuestMenu_Params
	{
	public:
		int32_t                                                    InQuestId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnFinishMenu_2
	 */
	struct UMapWidget_Map_C_OnFinishMenu_2_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLVE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.ExecuteUbergraph_MapWidget_Map
	 */
	struct UMapWidget_Map_C_ExecuteUbergraph_MapWidget_Map_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnQuestDetailForMapChanged__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnInitPlayerIcon__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnInitPlayerIcon__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           PlayerPosition;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MapSize;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnUpdatePlayerIconPosition__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           MapPosition;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ViewScale;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnSetMapScrollFunctionOnOff__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature_Params
	{
	public:
		bool                                                       InIsScrollFunctionOn;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQCL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           InScrollHVLength;                                        // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnUpdateTraverseCloud__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnUpdateTraverseCloud__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnWarpPointIconPressed__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnWarpPointIconPressed__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnResetInputMode__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnResetInputMode__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnWarpRequestAccepted__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnWarpRequestAccepted__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnShowErrorMessage__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnShowErrorMessage__DelegateSignature_Params
	{
	public:
		int32_t                                                    InMessageTextId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnPinnedPinClicked__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnPinnedPinClicked__DelegateSignature_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnEndSavePinInfo__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnEndSavePinInfo__DelegateSignature_Params
	{
	public:
		bool                                                       IsResultSuccess;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBMapErrorCode                                            ErrorCode;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnStartSavePinInfo__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnStartSavePinInfo__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnMapPressed__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnMapPressed__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_Map.MapWidget_Map_C.OnChangeToRegionMap__DelegateSignature
	 */
	struct UMapWidget_Map_C_OnChangeToRegionMap__DelegateSignature_Params
	{
	public:
		class FString                                              InRegionMapId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
