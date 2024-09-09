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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MapWidget_Map.MapWidget_Map_C
	 * Size -> 0x0420 (FullSize[0x0698] - InheritedSize[0x0278])
	 */
	class UMapWidget_Map_C : public USBMap
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               AdminBtn;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_Cloud_C*                                  Cloud0;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_Cloud_C*                                  Cloud1;                                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MapBodyGrp;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               MapBtn;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapImage;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MapPlaceNamePlates;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_TraverseCloud_C*                          MapWidget_TraverseCloud;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 NoMapTextBlock;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_PlayerIcon_C*                             PlayerIcon;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RegionIconGrp;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Dialog_C*                                        YesNoDialog;                                             // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        LoadBlocker;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          TempMapTexture2D;                                        // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMapWidget_MapPinnedPin_C*>                   WorldMapPinnedPinList;                                   // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_MapPinnedPin_C*>                   CurrAreaMapPinnedPinList;                                // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_PartyMemberIcon_C*>                PartyMemberIcons;                                        // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_WarpPointIcon_C*>                  WarpPointIcons;                                          // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_QuestIcon_C*>                      QuestIconS;                                              // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_CommonSymbolIcon_C*>               OtherSymbolIcons;                                        // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_CommonSymbolIcon_C*>               InterruptQuestIcons;                                     // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_CommonSymbolIcon_C*>               NamedEnemyIcons;                                         // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_CommonSymbolIcon_C*>               ResearchTeamIcons;                                       // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UIconQuestArea_C*>                            AreaIcons;                                               // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UIconQuestArea_C*>                            InterraptAreaIcons;                                      // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_TimeSymbolIcon_C*>                 TimeIcons;                                               // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMapWidget_CommonSymbolIcon_C*>               CampIcons;                                               // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FMapPinInfo>                                 MapPinInfoList;                                          // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector2D>                                   RegisteredQuestIconLocationList;                         // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBResearchTeamData>                         ResearchTeamList;                                        // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FMapPinInfo>                                 MapPinComboBoxList;                                      // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        CurrActiveWarpPoints;                                    // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBMasterWarpPoint                                  SelectedWarpPointData;                                   // 0x0428(0x0068) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnChangeToRegionMap;                                     // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           CurrSelectedMapCapturePosition;                          // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMapPressed;                                            // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBMapBGConfigTableRow                              LoadData;                                                // 0x04B8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           DefaultMapSize;                                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           TempMapSize;                                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle;                                             // 0x0540(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStartSavePinInfo;                                      // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PinnedPinCnt;                                            // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EP8K[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEndSavePinInfo;                                        // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPinnedPinClicked;                                      // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShowErrorMessage;                                      // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PartyMemberMax;                                          // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AreaMapPinMax;                                           // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InterruptQuestPartyMemberMax;                            // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WVM0[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWarpRequestAccepted;                                   // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResetInputMode;                                        // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnWarpPointIconPressed;                                  // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    NamedEnemyIconMax;                                       // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InterruptQuestIconMax;                                   // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdateTraverseCloud;                                   // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetMapScrollFunctionOnOff;                             // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    IconOrderScale;                                          // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AreaIconOrderScale;                                      // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrSelectedMapSizeScale;                                // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultMapSizeScale;                                     // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempLeftEdgePosDiffForCloud;                             // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZW63[0x4];                                   // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdatePlayerIconPosition;                              // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      IconPositionScale;                                       // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OP7F[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrSelectedMapId;                                       // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              NewLoadedMapId;                                          // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                PublicDungeonLocationId;                                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnInitPlayerIcon;                                        // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                RowName;                                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWorldMap;                                             // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsWarpLocked;                                           // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPartyMemberIconHided;                                 // 0x066A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSavingMapPinInfo;                                     // 0x066B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTextureLoad;                                            // 0x066C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPlayerCursorVisible;                                  // 0x066D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMapScrollFunctionOn;                                  // 0x066E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPublicDungeon;                                        // 0x066F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMapWidget_WarpPointIcon_C*>                  WarpPointIconsEx;                                        // 0x0670(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UQuestDetailForMap_C*                                QuestMenuEx;                                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQuestDetailForMapChanged;                              // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetPinMode(bool IsPinSelected);
		void DebugQuestInfoPrint(int32_t InIndex, int32_t InPriority);
		void GetQuestCategory2Name(EQuestCategory2 InCategory, class FString* Name);
		void GetPortaltoLocation(const class FString& InPortalName, class FString* OutLocationName);
		void GetNamedEnemyLevelColor(int32_t InLevel, struct FSlateColor* OutColor);
		void OnPressed_QuestIcon(int32_t InQuestId);
		void ClearWarpPointIconEx();
		void UpdateWarpPointEx();
		void HideDialog();
		void DeleteDialog();
		void CreateDialog(class UBP_Dialog_C** OutputPin);
		void UpdateMapPlaceNamePlate(const class FString& InMapId);
		void GetLoadData(struct FSBMapBGConfigTableRow* LoadData);
		void GetAreaMapPinMax(int32_t* AreaMapPinMax);
		void IsWorldMapFlag(bool* IsWorldMap);
		void SetWorldMapFlag(bool IsWorldMap);
		void OnRaidPortalClose(int32_t Index, class UMapWidget_TimeSymbolIcon_C* Widget);
		void OnPressed_WarpPointIcon(class UMapWidget_WarpPointIcon_C* InWarpPointIcon);
		void OnPressed_RegionIcon(const class FString& InRegionMapId);
		void UpdateCanvasScale();
		void PublicDungeon_DirectWarpCheck(const class FName& DungeonId, bool* IsOpen);
		void LocationIconVisibleCheck(const class FName& LocationId, bool* Visible);
		void UpdateCampPointIcon();
		void ClearCampPointIcon();
		void FindQuestAreaIcon(const struct FSBMiniMapQuestAreaConfig& TargetData, TArray<struct FSBMiniMapQuestAreaConfig>* RefList, int32_t* TopIndex, TArray<int32_t>* FindIndex);
		void CreateChallengeQuestIcon(struct FSBCharacterProfileData* ProfileData, int32_t LocationIndex, ESBFacilityType FacilityType);
		void TimeIconSetting(class UWidget* IconWidget, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32_t Prio);
		void UpdateInterruptQuestAreaIcon();
		void RemoveInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance);
		void AddInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance);
		void CalcAreaIconSize(const class FName& MapId, class UIconQuestArea_C* AreaWidget);
		void UpdateQuestAreaIcon();
		void ClearQuestAreaIcon();
		void SetResearchTeamList(TArray<struct FSBResearchTeamData>* InList);
		void ClearResearchTeamSymbolIcon();
		void CreateResearchTeamSymbolIcon();
		void RecalculateMapPlaceNamePlatePositions(const struct FVector2D& InMapImageSize, const class FString& InMapId);
		void SetupMapPlaceNamePlates(const class FString& InMapId);
		void UpdateNamedEnemyIcon();
		void ClearNamedEnemyIcon();
		void CreateNamedEnemyIcon();
		void TraverseCloudUpdate(const class FString& InMapId, int32_t Floor);
		void IsDisplayQuestIconStandby(EQuestCategory2 QuestCategory2, bool* bDisplay);
		int32_t getQuestIconZOrder(EQuestCategory2 Category2, EQuestStatus Status, int32_t QuestIndex);
		void UpdateInterruptQuestIcon();
		void ClearInterruptQuestIcon();
		void CreateInterruptQuestIcon();
		void UpdatePlayerIcon();
		void SetupPlayerIcon(bool IsIconVisible);
		void GetWarpConfirmationTextIdx(int32_t* TextIdx);
		void GetWarpPointDataFromName(const class FString& InWarpPointName, bool* IsValid, struct FSBMasterWarpPoint* OutWarpPointData);
		void DoWarpFromWarpBox(const struct FSBMasterWarpPoint& InWarpPointData);
		void GetMapBGConfigRowName(const struct FSBMapBGConfigTableRow& InMagBGConfig, bool* OutIsValid, class FString* OutRowName);
		void CheckIfWarpDestIsAbsoluteFree_ForAlpha(const struct FWarpPointMasterData& InWarpPointMasterData, bool* IsAbsoluteFree);
		void CalcPinPosition(class UMapWidget_MapPinnedPin_C* InPin, const struct FMapPinInfo& InMapPinInfo);
		void GetMapPinInfoFromPinId(int32_t inPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo);
		void GetMapPinInfoList(TArray<struct FMapPinInfo>* MapPinInfoList);
		void GetPinnedPinCnd(int32_t* PinnedPinCnt);
		bool IsEnablePinIcon();
		void GetVacantAreaMapPin(class UMapWidget_MapPinnedPin_C** OutPinRef, bool* IsPinVacant);
		void ClearQuestIcon();
		void UpdateOtherSymbolIcon();
		void ClearOtherSymbolIcon();
		void CreateTimeSymbolIcon(int32_t InIndex, const struct FSBCharacterProfileLocationData& LocationData, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32_t InPriority);
		int32_t CreateCommonSymbolIcon(class UTexture2D* InTexture, int32_t Prio, const struct FVector2D& Pos, const class FString& TooltipString);
		void CreateOtherSymbolIconToLocation(const struct FSBLocationInfo& LocationInfo, const class FName& RowName);
		void CreateOtherSymbolIconToProfile(const struct FSBCharacterProfileData& CharcterProfile);
		void OtherSymbolIconSetting(class UMapWidget_CommonSymbolIcon_C* IconWidget, int32_t Prio, const struct FVector2D& Pos);
		void UpdateQuestIcon();
		void InitPlayerIcon();
		void HidePartyMemberIcon();
		void UpdatePartyMemberIcon();
		void ClearPartyMemberIcon();
		void CreatePartyMemberIcon();
		void PlayAnimOut();
		void PlayAnimIn();
		void FindPinInfoByPinIndex(TArray<struct FMapPinInfo>* InPinInfoList, const struct FMapPinInfo& InTargetPinInfo, struct FMapPinInfo* OutPinInfo, bool* OutResult);
		void PrintMapPinInfoList();
		void DoErasePinnedPin(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void DoSavePinInfo(class UMapWidget_MapPinnedPin_C* InPinnedPin, bool ResetInputMode);
		void IsSavingMapPinInfo(bool* IsSavingMapPinInfo);
		void SetSavingMapPinInfo(bool IsSavingMapPinInfo);
		void GetMapPinInfoFromBoxIndex(int32_t inPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo);
		void UpdateComboBoxPinList();
		void ClosePinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void OpenPinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void SetMapToPinAttachMode(bool IsAttachMode);
		void AttachPinToMap(class UMapWidget_MapPinnedPin_C* InMapPin, const struct FMapPinInfo& InMapPinInfo, bool IsTextBoxVisible);
		void SetPinToMap(class UMapWidget_MapPinnedPin_C* InPinnedPinRef);
		class UMapWidget_MapPinnedPin_C* CreateMapWidgetMapPinnedPin();
		void ClearCurrentAreaMapPinnedPin();
		void CreateCurrentAreaMapPinnedPin();
		void ClearWorldMapPinnedPin();
		void CreateWorldMapPinnedPin();
		void InitPinInfo();
		void GetMapBGConfigFromMapId(const class FString& InMapId, struct FSBMapBGConfigTableRow* OutMapBGConfig);
		void GetMapBGConfigFromIndex(int32_t InIndex, struct FSBMapBGConfigTableRow* OutMapBGConfig);
		void GetMapBodyPosition(struct FVector2D* OutPosition);
		void SetMapBodyPosition(const struct FVector2D& InPosition);
		struct FVector2D GetMapBodySize();
		void SetMapBodySize(const struct FVector2D& InSize);
		void CalcWorldPosition(const struct FVector2D& MapLocation, struct FVector2D* WorldLocation);
		void CalcMapPosition(const struct FVector2D& WorldLocation, struct FVector2D* MapLocation);
		void UpdateWarpPoint();
		void ClearWarpPointIcon();
		void SetWorldMapTexture(const class FString& InMapId);
		void SetupAsRegionMap(const class FString& InMapId, bool InIsPlayerCursorVisible);
		void SetupAsWorldMap(const class FString& InMapId);
		void SetupMap(const class FString& InMapId, bool InIsPlayerCursorVisible);
		void SetRegionMapTexture(const class FString& InMapId);
		void ClearIcon();
		void UpdateTimerEvent();
		void ResetTimerEvent();
		void SetupTimerEvent();
		void SetupIcon();
		void Close();
		void Setup();
		void Terminate();
		void Initialize();
		void OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8(class UObject* Loaded);
		void SetupInterruptQuest();
		void AddInterruptArea(class ASBInterruptQuestInstance* InInstance);
		void RemoveInterruptArea(class ASBInterruptQuestInstance* InInstance);
		void ResetInterruptQuest();
		void OnSaveMapPinInfosDelegate_(bool Result, ESBMapErrorCode ErrorCode);
		void OnTextCommitted_(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void OnPinBtnClicked_(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void BindPin(class UMapWidget_MapPinnedPin_C* Target);
		void UnbindPin(class UMapWidget_MapPinnedPin_C* Target);
		void BindOnSaveMapPinInfos();
		void UnbindOnSaveMapPinInfos();
		void BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void InitAdminBtn();
		void Construct();
		void Destruct();
		void OnEndYesNoDialog(EDialogResult Result);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void InitMapBG(const struct FSBMapBGConfigTableRow& InMapBGConfig, const class FString& InMapId);
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
		void EventCreateDialog();
		void OpenQuestMenu(int32_t InQuestId);
		void OnFinishMenu_2(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex);
		void ExecuteUbergraph_MapWidget_Map(int32_t EntryPoint);
		void OnQuestDetailForMapChanged__DelegateSignature(bool bIsOpen);
		void OnInitPlayerIcon__DelegateSignature(const struct FVector2D& PlayerPosition, const struct FVector2D& MapSize);
		void OnUpdatePlayerIconPosition__DelegateSignature(const struct FVector2D& MapPosition, float ViewScale);
		void OnSetMapScrollFunctionOnOff__DelegateSignature(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength);
		void OnUpdateTraverseCloud__DelegateSignature();
		void OnWarpPointIconPressed__DelegateSignature();
		void OnResetInputMode__DelegateSignature();
		void OnWarpRequestAccepted__DelegateSignature();
		void OnShowErrorMessage__DelegateSignature(int32_t InMessageTextId);
		void OnPinnedPinClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void OnEndSavePinInfo__DelegateSignature(bool IsResultSuccess, ESBMapErrorCode ErrorCode);
		void OnStartSavePinInfo__DelegateSignature();
		void OnMapPressed__DelegateSignature();
		void OnChangeToRegionMap__DelegateSignature(const class FString& InRegionMapId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
