#pragma once

 

// Package: MapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget.MapWidget_C
// 0x0248 (0x04F0 - 0x02A8)
class UMapWidget_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_DividedZoneList_C*           DividedZoneList;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_CompoundBox_C*               MapBox;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMap_MapBtn_C*                          MapBtn;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_MapScrollBar_C*              MapScrollBar;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_AreaName_C*                  MapWidget_AreaName;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      MenuItemButtonList;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowAreaName;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_CompoundBox_C*               PinBox;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnderlayForMapFunctions;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBForDividedZoneList;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_VisitedMapList2_C*           VisitedMapList;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VisitedMapListBg01;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_CompoundBox_C*               WarpBox;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedMapId;                                     // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         MapNameList;                                       // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         AreaMapIdList;                                     // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CurrMapId;                                         // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrWorldMapId;                                    // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UMapWidget_Map_C*                       MapBody;                                           // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMultiLayerMap;                                   // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D68[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_FuncIconList_C*              FuncIconList;                                      // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PinIconList_C*               PinIconList;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         LastSelectedMapList;                               // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPinSelected;                                     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EMapPinType                                   SelectedPinType;                                   // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPinTextBoxOpened;                                // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D69[0x5];                                     // 0x03D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_MapPinnedPin_C*              CurrSelectedPinnedPin;                             // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWorldMap;                                        // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D6A[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         WarpBoxWarpPointNameList;                          // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SaveMapPinErrorText;                               // 0x03F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              PinnedLocationXY;                                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PinnedWorldPositionRate;                           // 0x0418(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D6B[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         BookmarkTypeList;                                  // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsVisitedMapListOpen;                              // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D6C[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempSelectedVisitedMapId;                          // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         VisitedMapIdList;                                  // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         VisitedMapZoneIdList;                              // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMapSelectedByDividedZoneList;                    // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMapScrollFunctionOn;                             // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMapScrollMouseCaptureBegin;                      // 0x0472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D6D[0x5];                                     // 0x0473(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      TempPlayerController;                              // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempInputMouseDeltaX;                              // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempInputMouseDeltaY;                              // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResearchTeamSupporterListOpen;                   // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D6E[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrSubLevelId;                                    // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsSubLevel;                                       // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPublicDungeon;                                   // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D6F[0x2];                                     // 0x04A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InputMouseMovePower;                               // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 FaceImageURL;                                      // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2DDynamic*                      FaceImageTexture;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OnPlayerMapId;                                     // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bPlayerIconVisible;                                // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bViewZoneName;                                     // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D70[0x6];                                     // 0x04D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         CursorClassPath;                                   // 0x04D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_MapWidget(int32 EntryPoint);
	void OnQuestDetailForMapChanged(bool bIsOpen);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void ResetMouseCursorTypeToDefaultRequest();
	void UpdateMarkerPin();
	void OnPinBoxPinIconSelected_____(EMapPinType InSelectedPinType);
	void BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature();
	void BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature();
	void OnEndSavePinInfo_____(bool IsResultSuccess, ESBMapErrorCode ErrorCode);
	void OnWarpPointIconPressed_____();
	void BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature();
	void BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature();
	void ResetMouseCursorTypeToDefault();
	void ChangeMouseCursorType(EMapPinType InMapPinType);
	void ResetInputModeToMapWidget();
	void OnWarpRequestAccepted_____();
	void BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId);
	void BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void DoChangeMapTypeSelected(bool Param_IsWorldMap);
	void BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature(int32 ButtonId);
	void EndShowErrorMessage();
	void StartShowErrorMessage(int32 InMessageTextId);
	void OnPinnedPinClicked_____(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void UpdatePinBox();
	void OnStartSavePinInfo_____();
	void OnMapPressed_____();
	void OnParentTerm();
	void OnRMShopClosed();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSetMapScrollFunctionOnOffEvent(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength);
	void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature(float InValue);
	void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature(float InValue);
	void OnFuncIconSelected(EMapFuncIconType InSelectedFuncIconType);
	void OnChangeToRegionMap_____(const class FString& InRegionMapId);
	void OnChangeMap(const class FString& InMapId, bool InIsWorldMap);
	void Init();
	void Destruct();
	void Construct();
	void BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
	void BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature(const class FString& InMapId);
	void BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId);
	void CloseVisitedMapList();
	void BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
	void OnUpdateTraverseCloudEvent();
	void OnDefaultScrollSetting(const struct FVector2D& PlayerPos, const struct FVector2D& FieldSize);
	void OnPlayerViewScroll(const struct FVector2D& IconPosition, float ViewScale);
	void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature();
	void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature();
	void TickForMapScroll();
	void CloseMapWidget();
	void SetupMapList();
	void GetCurrentMapId(bool InIsWorldMap, class FString* OutMapId, bool* OutIsSubLevel, class FString* OutSubLevelId);
	void SetupMap(const class FString& InMapId, bool InIsWorldMap, bool InIsSelectedByDividedZoneList);
	void SetupPinDropDownList();
	void SetupWarpPointDropDownList();
	void GetWorldMapId(class FString* OutId);
	void IsMapListAdd(struct FSBMapBGConfigTableRow& CheckMap, bool* IsAdd);
	void TraverseUpdate(const class FString& InMapId, int32 Floor);
	void CheckIfMapHasDividedZone(const class FString& InMapId, bool* OutMapHasDividedZones);
	void CheckIfMapIsDividedZone(const class FString& InMapId, bool* OutMapIsDividedZone);
	void GetTopMapIdByDividedZoneId(const class FString& InMapId, class FString* OutTopMapId);
	void GetIsRmShopDisplayed(bool* OutIsRmShopDisplayed);
	void GetZoneDBRowNameFromZoneId(const class FString& InZoneId, bool* OutIsValid, class FName* OutRowName);
	void GetZoneDBZoneIdFromRowName(class FName InRowName, bool* OutIsValid, class FName* OutZoneId);
	void PublicDungeonCheck();
	void UpdateMapName();
	void SetupMapDefaultScroll(const struct FVector2D& Position, const struct FVector2D& MapSize);
	void EXSettingMapCheck();
	void CheckMapInTemple(bool* OutParam);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

	struct FVector CalcPinWorldPosition(const struct FVector2D& InPinnedLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_C">();
	}
	static class UMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_C>();
	}
};
static_assert(alignof(UMapWidget_C) == 0x000008, "Wrong alignment on UMapWidget_C");
static_assert(sizeof(UMapWidget_C) == 0x0004F0, "Wrong size on UMapWidget_C");
static_assert(offsetof(UMapWidget_C, UberGraphFrame) == 0x0002A8, "Member 'UMapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, AnimOut2) == 0x0002B0, "Member 'UMapWidget_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, AnimOut) == 0x0002B8, "Member 'UMapWidget_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, AnimIn) == 0x0002C0, "Member 'UMapWidget_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CommandMenu_Line) == 0x0002C8, "Member 'UMapWidget_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, DividedZoneList) == 0x0002D0, "Member 'UMapWidget_C::DividedZoneList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapBox) == 0x0002D8, "Member 'UMapWidget_C::MapBox' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapBtn) == 0x0002E0, "Member 'UMapWidget_C::MapBtn' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapScrollBar) == 0x0002E8, "Member 'UMapWidget_C::MapScrollBar' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapWidget_AreaName) == 0x0002F0, "Member 'UMapWidget_C::MapWidget_AreaName' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MenuItemButtonList) == 0x0002F8, "Member 'UMapWidget_C::MenuItemButtonList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, NowAreaName) == 0x000300, "Member 'UMapWidget_C::NowAreaName' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, PinBox) == 0x000308, "Member 'UMapWidget_C::PinBox' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, UIBlocker) == 0x000310, "Member 'UMapWidget_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, UnderlayForMapFunctions) == 0x000318, "Member 'UMapWidget_C::UnderlayForMapFunctions' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, VBForDividedZoneList) == 0x000320, "Member 'UMapWidget_C::VBForDividedZoneList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, VisitedMapList) == 0x000328, "Member 'UMapWidget_C::VisitedMapList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, VisitedMapListBg01) == 0x000330, "Member 'UMapWidget_C::VisitedMapListBg01' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, WarpBox) == 0x000338, "Member 'UMapWidget_C::WarpBox' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, OnClose) == 0x000340, "Member 'UMapWidget_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, SelectedMapId) == 0x000350, "Member 'UMapWidget_C::SelectedMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapNameList) == 0x000360, "Member 'UMapWidget_C::MapNameList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, AreaMapIdList) == 0x000370, "Member 'UMapWidget_C::AreaMapIdList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CurrMapId) == 0x000380, "Member 'UMapWidget_C::CurrMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CurrWorldMapId) == 0x000390, "Member 'UMapWidget_C::CurrWorldMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, MapBody) == 0x0003A0, "Member 'UMapWidget_C::MapBody' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsMultiLayerMap) == 0x0003A8, "Member 'UMapWidget_C::IsMultiLayerMap' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, FuncIconList) == 0x0003B0, "Member 'UMapWidget_C::FuncIconList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, PinIconList) == 0x0003B8, "Member 'UMapWidget_C::PinIconList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, LastSelectedMapList) == 0x0003C0, "Member 'UMapWidget_C::LastSelectedMapList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsPinSelected) == 0x0003D0, "Member 'UMapWidget_C::IsPinSelected' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, SelectedPinType) == 0x0003D1, "Member 'UMapWidget_C::SelectedPinType' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsPinTextBoxOpened) == 0x0003D2, "Member 'UMapWidget_C::IsPinTextBoxOpened' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CurrSelectedPinnedPin) == 0x0003D8, "Member 'UMapWidget_C::CurrSelectedPinnedPin' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsWorldMap) == 0x0003E0, "Member 'UMapWidget_C::IsWorldMap' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, WarpBoxWarpPointNameList) == 0x0003E8, "Member 'UMapWidget_C::WarpBoxWarpPointNameList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, SaveMapPinErrorText) == 0x0003F8, "Member 'UMapWidget_C::SaveMapPinErrorText' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, PinnedLocationXY) == 0x000410, "Member 'UMapWidget_C::PinnedLocationXY' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, PinnedWorldPositionRate) == 0x000418, "Member 'UMapWidget_C::PinnedWorldPositionRate' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, BookmarkTypeList) == 0x000428, "Member 'UMapWidget_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsVisitedMapListOpen) == 0x000438, "Member 'UMapWidget_C::IsVisitedMapListOpen' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, TempSelectedVisitedMapId) == 0x000440, "Member 'UMapWidget_C::TempSelectedVisitedMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, VisitedMapIdList) == 0x000450, "Member 'UMapWidget_C::VisitedMapIdList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, VisitedMapZoneIdList) == 0x000460, "Member 'UMapWidget_C::VisitedMapZoneIdList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsMapSelectedByDividedZoneList) == 0x000470, "Member 'UMapWidget_C::IsMapSelectedByDividedZoneList' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsMapScrollFunctionOn) == 0x000471, "Member 'UMapWidget_C::IsMapScrollFunctionOn' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsMapScrollMouseCaptureBegin) == 0x000472, "Member 'UMapWidget_C::IsMapScrollMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, TempPlayerController) == 0x000478, "Member 'UMapWidget_C::TempPlayerController' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, TempInputMouseDeltaX) == 0x000480, "Member 'UMapWidget_C::TempInputMouseDeltaX' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, TempInputMouseDeltaY) == 0x000484, "Member 'UMapWidget_C::TempInputMouseDeltaY' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsResearchTeamSupporterListOpen) == 0x000488, "Member 'UMapWidget_C::IsResearchTeamSupporterListOpen' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CurrSubLevelId) == 0x000490, "Member 'UMapWidget_C::CurrSubLevelId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, bIsSubLevel) == 0x0004A0, "Member 'UMapWidget_C::bIsSubLevel' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, IsPublicDungeon) == 0x0004A1, "Member 'UMapWidget_C::IsPublicDungeon' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, InputMouseMovePower) == 0x0004A4, "Member 'UMapWidget_C::InputMouseMovePower' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, FaceImageURL) == 0x0004A8, "Member 'UMapWidget_C::FaceImageURL' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, FaceImageTexture) == 0x0004B8, "Member 'UMapWidget_C::FaceImageTexture' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, OnPlayerMapId) == 0x0004C0, "Member 'UMapWidget_C::OnPlayerMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, bPlayerIconVisible) == 0x0004D0, "Member 'UMapWidget_C::bPlayerIconVisible' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, bViewZoneName) == 0x0004D1, "Member 'UMapWidget_C::bViewZoneName' has a wrong offset!");
static_assert(offsetof(UMapWidget_C, CursorClassPath) == 0x0004D8, "Member 'UMapWidget_C::CursorClassPath' has a wrong offset!");

}

