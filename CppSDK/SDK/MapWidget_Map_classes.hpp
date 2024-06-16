#pragma once

 

// Package: MapWidget_Map

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_Map.MapWidget_Map_C
// 0x0420 (0x0698 - 0x0278)
class UMapWidget_Map_C final : public USBMap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  AdminBtn;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_Cloud_C*                     Cloud0;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_Cloud_C*                     Cloud1;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MapBodyGrp;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  MapBtn;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapImage;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MapPlaceNamePlates;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_TraverseCloud_C*             MapWidget_TraverseCloud;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NoMapTextBlock;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_PlayerIcon_C*                PlayerIcon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RegionIconGrp;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Dialog_C*                           YesNoDialog;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           LoadBlocker;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TempMapTexture2D;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMapWidget_MapPinnedPin_C*>      WorldMapPinnedPinList;                             // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_MapPinnedPin_C*>      CurrAreaMapPinnedPinList;                          // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_PartyMemberIcon_C*>   PartyMemberIcons;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_WarpPointIcon_C*>     WarpPointIcons;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_QuestIcon_C*>         QuestIconS;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_CommonSymbolIcon_C*>  OtherSymbolIcons;                                  // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_CommonSymbolIcon_C*>  InterruptQuestIcons;                               // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_CommonSymbolIcon_C*>  NamedEnemyIcons;                                   // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_CommonSymbolIcon_C*>  ResearchTeamIcons;                                 // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UIconQuestArea_C*>               AreaIcons;                                         // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UIconQuestArea_C*>               InterraptAreaIcons;                                // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_TimeSymbolIcon_C*>    TimeIcons;                                         // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMapWidget_CommonSymbolIcon_C*>  CampIcons;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FMapPinInfo>                    MapPinInfoList;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      RegisteredQuestIconLocationList;                   // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBResearchTeamData>            ResearchTeamList;                                  // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMapPinInfo>                    MapPinComboBoxList;                                // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           CurrActiveWarpPoints;                              // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMasterWarpPoint                     SelectedWarpPointData;                             // 0x0428(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnChangeToRegionMap;                               // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              CurrSelectedMapCapturePosition;                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnMapPressed;                                      // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMapBGConfigTableRow                 LoadData;                                          // 0x04B8(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              DefaultMapSize;                                    // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TempMapSize;                                       // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0540(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartSavePinInfo;                                // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PinnedPinCnt;                                      // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149F[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndSavePinInfo;                                  // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPinnedPinClicked;                                // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShowErrorMessage;                                // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PartyMemberMax;                                    // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaMapPinMax;                                     // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InterruptQuestPartyMemberMax;                      // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A0[0x4];                                     // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnWarpRequestAccepted;                             // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnResetInputMode;                                  // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWarpPointIconPressed;                            // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NamedEnemyIconMax;                                 // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InterruptQuestIconMax;                             // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateTraverseCloud;                             // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetMapScrollFunctionOnOff;                       // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         IconOrderScale;                                    // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaIconOrderScale;                                // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrSelectedMapSizeScale;                          // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultMapSizeScale;                               // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempLeftEdgePosDiffForCloud;                       // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A1[0x4];                                     // 0x060C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdatePlayerIconPosition;                        // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         IconPositionScale;                                 // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A2[0x4];                                     // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrSelectedMapId;                                 // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 NewLoadedMapId;                                    // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   PublicDungeonLocationId;                           // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInitPlayerIcon;                                  // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   RowName;                                           // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWorldMap;                                       // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWarpLocked;                                     // 0x0669(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPartyMemberIconHided;                           // 0x066A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSavingMapPinInfo;                               // 0x066B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTextureLoad;                                      // 0x066C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayerCursorVisible;                            // 0x066D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMapScrollFunctionOn;                            // 0x066E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPublicDungeon;                                  // 0x066F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMapWidget_WarpPointIcon_C*>     WarpPointIconsEx;                                  // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UQuestDetailForMap_C*                   QuestMenuEx;                                       // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnQuestDetailForMapChanged;                        // 0x0688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnChangeToRegionMap__DelegateSignature(const class FString& InRegionMapId);
	void OnMapPressed__DelegateSignature();
	void OnStartSavePinInfo__DelegateSignature();
	void OnEndSavePinInfo__DelegateSignature(bool IsResultSuccess, ESBMapErrorCode ErrorCode);
	void OnPinnedPinClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void OnShowErrorMessage__DelegateSignature(int32 InMessageTextId);
	void OnWarpRequestAccepted__DelegateSignature();
	void OnResetInputMode__DelegateSignature();
	void OnWarpPointIconPressed__DelegateSignature();
	void OnUpdateTraverseCloud__DelegateSignature();
	void OnSetMapScrollFunctionOnOff__DelegateSignature(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength);
	void OnUpdatePlayerIconPosition__DelegateSignature(const struct FVector2D& MapPosition, float ViewScale);
	void OnInitPlayerIcon__DelegateSignature(const struct FVector2D& PlayerPosition, const struct FVector2D& MapSize);
	void OnQuestDetailForMapChanged__DelegateSignature(bool bIsOpen);
	void ExecuteUbergraph_MapWidget_Map(int32 EntryPoint);
	void OnFinishMenu_1(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex);
	void OpenQuestMenu(int32 InQuestId);
	void EventCreateDialog();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void InitMapBG(const struct FSBMapBGConfigTableRow& InMapBGConfig, const class FString& InMapId);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
	void OnEndYesNoDialog(EDialogResult Result);
	void Destruct();
	void Construct();
	void InitAdminBtn();
	void BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UnbindOnSaveMapPinInfos();
	void BindOnSaveMapPinInfos();
	void UnbindPin(class UMapWidget_MapPinnedPin_C* Target);
	void BindPin(class UMapWidget_MapPinnedPin_C* Target);
	void OnPinBtnClicked_____(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void OnTextCommitted_____(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void OnSaveMapPinInfosDelegate_____(const bool Result, const ESBMapErrorCode ErrorCode);
	void ResetInterruptQuest();
	void RemoveInterruptArea(const class ASBInterruptQuestInstance* InInstance);
	void AddInterruptArea(const class ASBInterruptQuestInstance* InInstance);
	void SetupInterruptQuest();
	void OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8(class UObject* Loaded);
	void Initialize();
	void Terminate();
	void Setup();
	void Close();
	void SetupIcon();
	void SetupTimerEvent();
	void ResetTimerEvent();
	void UpdateTimerEvent();
	void ClearIcon();
	void SetRegionMapTexture(const class FString& InMapId);
	void SetupMap(const class FString& InMapId, bool InIsPlayerCursorVisible);
	void SetupAsWorldMap(const class FString& InMapId);
	void SetupAsRegionMap(const class FString& InMapId, bool InIsPlayerCursorVisible);
	void SetWorldMapTexture(const class FString& InMapId);
	void ClearWarpPointIcon();
	void UpdateWarpPoint();
	void SetMapBodySize(const struct FVector2D& InSize);
	void SetMapBodyPosition(const struct FVector2D& InPosition);
	void InitPinInfo();
	void CreateWorldMapPinnedPin();
	void ClearWorldMapPinnedPin();
	void CreateCurrentAreaMapPinnedPin();
	void ClearCurrentAreaMapPinnedPin();
	class UMapWidget_MapPinnedPin_C* CreateMapWidgetMapPinnedPin();
	void SetPinToMap(class UMapWidget_MapPinnedPin_C* InPinnedPinRef);
	void AttachPinToMap(class UMapWidget_MapPinnedPin_C* InMapPin, const struct FMapPinInfo& InMapPinInfo, bool IsTextBoxVisible);
	void SetMapToPinAttachMode(bool IsAttachMode);
	void OpenPinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void ClosePinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void UpdateComboBoxPinList();
	void SetSavingMapPinInfo(bool Param_IsSavingMapPinInfo);
	void DoSavePinInfo(class UMapWidget_MapPinnedPin_C* InPinnedPin, bool ResetInputMode);
	void DoErasePinnedPin(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void PrintMapPinInfoList();
	void PlayAnimIn();
	void PlayAnimOut();
	void CreatePartyMemberIcon();
	void ClearPartyMemberIcon();
	void UpdatePartyMemberIcon();
	void HidePartyMemberIcon();
	void InitPlayerIcon();
	void UpdateQuestIcon();
	void OtherSymbolIconSetting(class UMapWidget_CommonSymbolIcon_C* IconWidget, int32 Prio, const struct FVector2D& Pos);
	void CreateOtherSymbolIconToProfile(const struct FSBCharacterProfileData& CharcterProfile);
	void CreateOtherSymbolIconToLocation(const struct FSBLocationInfo& LocationInfo, class FName Param_RowName);
	int32 CreateCommonSymbolIcon(class UTexture2D* InTexture, int32 Prio, const struct FVector2D& Pos, const class FString& TooltipString);
	void CreateTimeSymbolIcon(int32 InIndex, const struct FSBCharacterProfileLocationData& LocationData, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32 InPriority);
	void ClearOtherSymbolIcon();
	void UpdateOtherSymbolIcon();
	void ClearQuestIcon();
	void CalcPinPosition(class UMapWidget_MapPinnedPin_C* InPin, const struct FMapPinInfo& InMapPinInfo);
	void CheckIfWarpDestIsAbsoluteFree_ForAlpha(const struct FWarpPointMasterData& InWarpPointMasterData, bool* IsAbsoluteFree);
	void DoWarpFromWarpBox(const struct FSBMasterWarpPoint& InWarpPointData);
	void SetupPlayerIcon(bool IsIconVisible);
	void UpdatePlayerIcon();
	void CreateInterruptQuestIcon();
	void ClearInterruptQuestIcon();
	void UpdateInterruptQuestIcon();
	void TraverseCloudUpdate(const class FString& InMapId, int32 Floor);
	void CreateNamedEnemyIcon();
	void ClearNamedEnemyIcon();
	void UpdateNamedEnemyIcon();
	void SetupMapPlaceNamePlates(const class FString& InMapId);
	void RecalculateMapPlaceNamePlatePositions(const struct FVector2D& InMapImageSize, const class FString& InMapId);
	void CreateResearchTeamSymbolIcon();
	void ClearResearchTeamSymbolIcon();
	void SetResearchTeamList(TArray<struct FSBResearchTeamData>& InList);
	void ClearQuestAreaIcon();
	void UpdateQuestAreaIcon();
	void CalcAreaIconSize(class FName MapId, class UIconQuestArea_C* AreaWidget);
	void AddInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance);
	void RemoveInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance);
	void UpdateInterruptQuestAreaIcon();
	void TimeIconSetting(class UWidget* IconWidget, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32 Prio);
	void CreateChallengeQuestIcon(struct FSBCharacterProfileData& ProfileData, int32 LocationIndex, ESBFacilityType FacilityType);
	void FindQuestAreaIcon(const struct FSBMiniMapQuestAreaConfig& TargetData, TArray<struct FSBMiniMapQuestAreaConfig>& RefList, int32* TopIndex, TArray<int32>* FindIndex);
	void ClearCampPointIcon();
	void UpdateCampPointIcon();
	void LocationIconVisibleCheck(class FName LocationId, bool* Visible);
	void UpdateCanvasScale();
	void OnPressed_RegionIcon(const class FString& InRegionMapId);
	void OnPressed_WarpPointIcon(class UMapWidget_WarpPointIcon_C* InWarpPointIcon);
	void OnRaidPortalClose(int32 Param_Index, class UMapWidget_TimeSymbolIcon_C* Widget);
	void SetWorldMapFlag(bool IsWorldMap);
	void UpdateMapPlaceNamePlate(const class FString& InMapId);
	void CreateDialog(class UBP_Dialog_C** OutputPin);
	void DeleteDialog();
	void HideDialog();
	void UpdateWarpPointEx();
	void ClearWarpPointIconEx();
	void OnPressed_QuestIcon(int32 InQuestId);
	void GetNamedEnemyLevelColor(int32 InLevel, struct FSlateColor* OutColor);
	void Get_Portal_to_Location(const class FString& InPortalName, class FString* OutLocationName);
	void Get_Quest_Category_2Name(EQuestCategory2 InCategory, class FString* Param_Name);
	void DebugQuestInfoPrint(int32 InIndex, int32 InPriority);
	void SetPinMode(bool IsPinSelected);

	void CalcMapPosition(const struct FVector2D& WorldLocation, struct FVector2D* MapLocation) const;
	void CalcWorldPosition(const struct FVector2D& MapLocation, struct FVector2D* WorldLocation) const;
	struct FVector2D GetMapBodySize() const;
	void GetMapBodyPosition(struct FVector2D* OutPosition) const;
	void GetMapBGConfigFromIndex(int32 InIndex, struct FSBMapBGConfigTableRow* OutMapBGConfig) const;
	void GetMapBGConfigFromMapId(const class FString& InMapId, struct FSBMapBGConfigTableRow* OutMapBGConfig) const;
	void GetMapPinInfoFromBoxIndex(int32 InPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo) const;
	void IsSavingMapPinInfo(bool* Param_IsSavingMapPinInfo) const;
	void FindPinInfoByPinIndex(TArray<struct FMapPinInfo>& InPinInfoList, const struct FMapPinInfo& InTargetPinInfo, struct FMapPinInfo* OutPinInfo, bool* OutResult) const;
	void GetVacantAreaMapPin(class UMapWidget_MapPinnedPin_C** OutPinRef, bool* IsPinVacant) const;
	bool IsEnablePinIcon() const;
	void GetPinnedPinCnd(int32* Param_PinnedPinCnt) const;
	void GetMapPinInfoList(TArray<struct FMapPinInfo>* Param_MapPinInfoList) const;
	void GetMapPinInfoFromPinId(int32 InPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo) const;
	void GetMapBGConfigRowName(const struct FSBMapBGConfigTableRow& InMagBGConfig, bool* OutIsValid, class FString* OutRowName) const;
	void GetWarpPointDataFromName(const class FString& InWarpPointName, bool* IsValid, struct FSBMasterWarpPoint* OutWarpPointData) const;
	void GetWarpConfirmationTextIdx(int32* TextIdx) const;
	int32 GetQuestIconZOrder(EQuestCategory2 Category2, EQuestStatus Status, int32 QuestIndex) const;
	void IsDisplayQuestIconStandby(EQuestCategory2 QuestCategory2, bool* bDisplay) const;
	void PublicDungeon_DirectWarpCheck(class FName DungeonId, bool* IsOpen) const;
	void IsWorldMapFlag(bool* IsWorldMap) const;
	void GetAreaMapPinMax(int32* Param_AreaMapPinMax) const;
	void GetLoadData(struct FSBMapBGConfigTableRow* Param_LoadData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_Map_C">();
	}
	static class UMapWidget_Map_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_Map_C>();
	}
};
static_assert(alignof(UMapWidget_Map_C) == 0x000008, "Wrong alignment on UMapWidget_Map_C");
static_assert(sizeof(UMapWidget_Map_C) == 0x000698, "Wrong size on UMapWidget_Map_C");
static_assert(offsetof(UMapWidget_Map_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_Map_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AnimOut) == 0x000280, "Member 'UMapWidget_Map_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AnimIn) == 0x000288, "Member 'UMapWidget_Map_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AdminBtn) == 0x000290, "Member 'UMapWidget_Map_C::AdminBtn' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CanvasPanel_0) == 0x000298, "Member 'UMapWidget_Map_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, Cloud0) == 0x0002A0, "Member 'UMapWidget_Map_C::Cloud0' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, Cloud1) == 0x0002A8, "Member 'UMapWidget_Map_C::Cloud1' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapBodyGrp) == 0x0002B0, "Member 'UMapWidget_Map_C::MapBodyGrp' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapBtn) == 0x0002B8, "Member 'UMapWidget_Map_C::MapBtn' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapImage) == 0x0002C0, "Member 'UMapWidget_Map_C::MapImage' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapPlaceNamePlates) == 0x0002C8, "Member 'UMapWidget_Map_C::MapPlaceNamePlates' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapWidget_TraverseCloud) == 0x0002D0, "Member 'UMapWidget_Map_C::MapWidget_TraverseCloud' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, NoMapTextBlock) == 0x0002D8, "Member 'UMapWidget_Map_C::NoMapTextBlock' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, PlayerIcon) == 0x0002E0, "Member 'UMapWidget_Map_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, RegionIconGrp) == 0x0002E8, "Member 'UMapWidget_Map_C::RegionIconGrp' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, YesNoDialog) == 0x0002F0, "Member 'UMapWidget_Map_C::YesNoDialog' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, LoadBlocker) == 0x0002F8, "Member 'UMapWidget_Map_C::LoadBlocker' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, TempMapTexture2D) == 0x000300, "Member 'UMapWidget_Map_C::TempMapTexture2D' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, WorldMapPinnedPinList) == 0x000308, "Member 'UMapWidget_Map_C::WorldMapPinnedPinList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CurrAreaMapPinnedPinList) == 0x000318, "Member 'UMapWidget_Map_C::CurrAreaMapPinnedPinList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, PartyMemberIcons) == 0x000328, "Member 'UMapWidget_Map_C::PartyMemberIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, WarpPointIcons) == 0x000338, "Member 'UMapWidget_Map_C::WarpPointIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, QuestIconS) == 0x000348, "Member 'UMapWidget_Map_C::QuestIconS' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OtherSymbolIcons) == 0x000358, "Member 'UMapWidget_Map_C::OtherSymbolIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, InterruptQuestIcons) == 0x000368, "Member 'UMapWidget_Map_C::InterruptQuestIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, NamedEnemyIcons) == 0x000378, "Member 'UMapWidget_Map_C::NamedEnemyIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, ResearchTeamIcons) == 0x000388, "Member 'UMapWidget_Map_C::ResearchTeamIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AreaIcons) == 0x000398, "Member 'UMapWidget_Map_C::AreaIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, InterraptAreaIcons) == 0x0003A8, "Member 'UMapWidget_Map_C::InterraptAreaIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, TimeIcons) == 0x0003B8, "Member 'UMapWidget_Map_C::TimeIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CampIcons) == 0x0003C8, "Member 'UMapWidget_Map_C::CampIcons' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapPinInfoList) == 0x0003D8, "Member 'UMapWidget_Map_C::MapPinInfoList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, RegisteredQuestIconLocationList) == 0x0003E8, "Member 'UMapWidget_Map_C::RegisteredQuestIconLocationList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, ResearchTeamList) == 0x0003F8, "Member 'UMapWidget_Map_C::ResearchTeamList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, MapPinComboBoxList) == 0x000408, "Member 'UMapWidget_Map_C::MapPinComboBoxList' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CurrActiveWarpPoints) == 0x000418, "Member 'UMapWidget_Map_C::CurrActiveWarpPoints' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, SelectedWarpPointData) == 0x000428, "Member 'UMapWidget_Map_C::SelectedWarpPointData' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnChangeToRegionMap) == 0x000490, "Member 'UMapWidget_Map_C::OnChangeToRegionMap' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CurrSelectedMapCapturePosition) == 0x0004A0, "Member 'UMapWidget_Map_C::CurrSelectedMapCapturePosition' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnMapPressed) == 0x0004A8, "Member 'UMapWidget_Map_C::OnMapPressed' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, LoadData) == 0x0004B8, "Member 'UMapWidget_Map_C::LoadData' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, DefaultMapSize) == 0x000530, "Member 'UMapWidget_Map_C::DefaultMapSize' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, TempMapSize) == 0x000538, "Member 'UMapWidget_Map_C::TempMapSize' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, TimerHandle) == 0x000540, "Member 'UMapWidget_Map_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnStartSavePinInfo) == 0x000548, "Member 'UMapWidget_Map_C::OnStartSavePinInfo' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, PinnedPinCnt) == 0x000558, "Member 'UMapWidget_Map_C::PinnedPinCnt' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnEndSavePinInfo) == 0x000560, "Member 'UMapWidget_Map_C::OnEndSavePinInfo' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnPinnedPinClicked) == 0x000570, "Member 'UMapWidget_Map_C::OnPinnedPinClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnShowErrorMessage) == 0x000580, "Member 'UMapWidget_Map_C::OnShowErrorMessage' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, PartyMemberMax) == 0x000590, "Member 'UMapWidget_Map_C::PartyMemberMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AreaMapPinMax) == 0x000594, "Member 'UMapWidget_Map_C::AreaMapPinMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, InterruptQuestPartyMemberMax) == 0x000598, "Member 'UMapWidget_Map_C::InterruptQuestPartyMemberMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnWarpRequestAccepted) == 0x0005A0, "Member 'UMapWidget_Map_C::OnWarpRequestAccepted' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnResetInputMode) == 0x0005B0, "Member 'UMapWidget_Map_C::OnResetInputMode' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnWarpPointIconPressed) == 0x0005C0, "Member 'UMapWidget_Map_C::OnWarpPointIconPressed' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, NamedEnemyIconMax) == 0x0005D0, "Member 'UMapWidget_Map_C::NamedEnemyIconMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, InterruptQuestIconMax) == 0x0005D4, "Member 'UMapWidget_Map_C::InterruptQuestIconMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnUpdateTraverseCloud) == 0x0005D8, "Member 'UMapWidget_Map_C::OnUpdateTraverseCloud' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnSetMapScrollFunctionOnOff) == 0x0005E8, "Member 'UMapWidget_Map_C::OnSetMapScrollFunctionOnOff' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, IconOrderScale) == 0x0005F8, "Member 'UMapWidget_Map_C::IconOrderScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, AreaIconOrderScale) == 0x0005FC, "Member 'UMapWidget_Map_C::AreaIconOrderScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CurrSelectedMapSizeScale) == 0x000600, "Member 'UMapWidget_Map_C::CurrSelectedMapSizeScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, DefaultMapSizeScale) == 0x000604, "Member 'UMapWidget_Map_C::DefaultMapSizeScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, TempLeftEdgePosDiffForCloud) == 0x000608, "Member 'UMapWidget_Map_C::TempLeftEdgePosDiffForCloud' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnUpdatePlayerIconPosition) == 0x000610, "Member 'UMapWidget_Map_C::OnUpdatePlayerIconPosition' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, IconPositionScale) == 0x000620, "Member 'UMapWidget_Map_C::IconPositionScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, CurrSelectedMapId) == 0x000628, "Member 'UMapWidget_Map_C::CurrSelectedMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, NewLoadedMapId) == 0x000638, "Member 'UMapWidget_Map_C::NewLoadedMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, PublicDungeonLocationId) == 0x000648, "Member 'UMapWidget_Map_C::PublicDungeonLocationId' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnInitPlayerIcon) == 0x000650, "Member 'UMapWidget_Map_C::OnInitPlayerIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, RowName) == 0x000660, "Member 'UMapWidget_Map_C::RowName' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsWorldMap) == 0x000668, "Member 'UMapWidget_Map_C::bIsWorldMap' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsWarpLocked) == 0x000669, "Member 'UMapWidget_Map_C::bIsWarpLocked' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsPartyMemberIconHided) == 0x00066A, "Member 'UMapWidget_Map_C::bIsPartyMemberIconHided' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsSavingMapPinInfo) == 0x00066B, "Member 'UMapWidget_Map_C::bIsSavingMapPinInfo' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bTextureLoad) == 0x00066C, "Member 'UMapWidget_Map_C::bTextureLoad' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsPlayerCursorVisible) == 0x00066D, "Member 'UMapWidget_Map_C::bIsPlayerCursorVisible' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsMapScrollFunctionOn) == 0x00066E, "Member 'UMapWidget_Map_C::bIsMapScrollFunctionOn' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, bIsPublicDungeon) == 0x00066F, "Member 'UMapWidget_Map_C::bIsPublicDungeon' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, WarpPointIconsEx) == 0x000670, "Member 'UMapWidget_Map_C::WarpPointIconsEx' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, QuestMenuEx) == 0x000680, "Member 'UMapWidget_Map_C::QuestMenuEx' has a wrong offset!");
static_assert(offsetof(UMapWidget_Map_C, OnQuestDetailForMapChanged) == 0x000688, "Member 'UMapWidget_Map_C::OnQuestDetailForMapChanged' has a wrong offset!");

}

