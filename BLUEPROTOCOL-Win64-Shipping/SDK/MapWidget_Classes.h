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
	 * WidgetBlueprintGeneratedClass MapWidget.MapWidget_C
	 * Size -> 0x0248 (FullSize[0x04F0] - InheritedSize[0x02A8])
	 */
	class UMapWidget_C : public USBCommandMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_DividedZoneList_C*                        DividedZoneList;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_CompoundBox_C*                            MapBox;                                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMap_MapBtn_C*                                       MapBtn;                                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_MapScrollBar_C*                           MapScrollBar;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_AreaName_C*                               MapWidget_AreaName;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   MenuItemButtonList;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NowAreaName;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_CompoundBox_C*                            PinBox;                                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UnderlayForMapFunctions;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBForDividedZoneList;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_VisitedMapList2_C*                        VisitedMapList;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VisitedMapListBg01;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_CompoundBox_C*                            WarpBox;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              SelectedMapId;                                           // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      MapNameList;                                             // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AreaMapIdList;                                           // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrMapId;                                               // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CurrWorldMapId;                                          // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UMapWidget_Map_C*                                    MapBody;                                                 // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMultiLayerMap;                                         // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JJZC[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapWidget_FuncIconList_C*                           FuncIconList;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMapWidget_PinIconList_C*                            PinIconList;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      LastSelectedMapList;                                     // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsPinSelected;                                           // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMapPinType                                                SelectedPinType;                                         // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPinTextBoxOpened;                                      // 0x03D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_APWY[0x5];                                   // 0x03D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapWidget_MapPinnedPin_C*                           CurrSelectedPinnedPin;                                   // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWorldMap;                                              // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMP2[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      WarpBoxWarpPointNameList;                                // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveMapPinErrorText;                                     // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           PinnedLocationXY;                                        // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PinnedWorldPositionRate;                                 // 0x0418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A1S5[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsVisitedMapListOpen;                                    // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G42T[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempSelectedVisitedMapId;                                // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      VisitedMapIdList;                                        // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      VisitedMapZoneIdList;                                    // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsMapSelectedByDividedZoneList;                          // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMapScrollFunctionOn;                                   // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMapScrollMouseCaptureBegin;                            // 0x0472(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3U1H[0x5];                                   // 0x0473(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   TempPlayerController;                                    // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempInputMouseDeltaX;                                    // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempInputMouseDeltaY;                                    // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsResearchTeamSupporterListOpen;                         // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9VNC[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrSubLevelId;                                          // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsSubLevel;                                             // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPublicDungeon;                                         // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQPJ[0x2];                                   // 0x04A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputMouseMovePower;                                     // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              FaceImageURL;                                            // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture2DDynamic*                                   FaceImageTexture;                                        // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              OnPlayerMapId;                                           // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bPlayerIconVisible;                                      // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bViewZoneName;                                           // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RQDP[0x6];                                   // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      CursorClassPath;                                         // 0x04D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void CheckMapInTemple(bool* OutParam);
		struct FVector CalcPinWorldPosition(const struct FVector2D& InPinnedLocation);
		void EXSettingMapCheck();
		void SetupMapDefaultScroll(const struct FVector2D& Position, const struct FVector2D& MapSize);
		void UpdateMapName();
		void PublicDungeonCheck();
		void GetZoneDBZoneIdFromRowName(const class FName& InRowName, bool* OutIsValid, class FName* OutZoneId);
		void GetZoneDBRowNameFromZoneId(const class FString& InZoneId, bool* OutIsValid, class FName* OutRowName);
		void GetIsRmShopDisplayed(bool* OutIsRmShopDisplayed);
		void GetTopMapIdByDividedZoneId(const class FString& InMapId, class FString* OutTopMapId);
		void CheckIfMapIsDividedZone(const class FString& InMapId, bool* OutMapIsDividedZone);
		void CheckIfMapHasDividedZone(const class FString& InMapId, bool* OutMapHasDividedZones);
		void TraverseUpdate(const class FString& InMapId, int32_t Floor);
		void IsMapListAdd(struct FSBMapBGConfigTableRow* CheckMap, bool* IsAdd);
		void GetWorldMapId(class FString* OutId);
		void SetupWarpPointDropDownList();
		void SetupPinDropDownList();
		void SetupMap(const class FString& InMapId, bool InIsWorldMap, bool InIsSelectedByDividedZoneList);
		void GetCurrentMapId(bool InIsWorldMap, class FString* OutMapId, bool* OutIsSubLevel, class FString* OutSubLevelId);
		void SetupMapList();
		void CloseMapWidget();
		void TickForMapScroll();
		void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature();
		void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature();
		void OnPlayerViewScroll(const struct FVector2D& IconPosition, float ViewScale);
		void OnDefaultScrollSetting(const struct FVector2D& PlayerPos, const struct FVector2D& FieldSize);
		void OnUpdateTraverseCloudEvent();
		void BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
		void CloseVisitedMapList();
		void BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId);
		void BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature(const class FString& InMapId);
		void BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
		void Construct();
		void Destruct();
		void Init();
		void OnChangeMap(const class FString& InMapId, bool InIsWorldMap);
		void OnChangeToRegionMap_(const class FString& InRegionMapId);
		void OnFuncIconSelected(EMapFuncIconType InSelectedFuncIconType);
		void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature(float InValue);
		void BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature(float InValue);
		void OnSetMapScrollFunctionOnOffEvent(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnRMShopClosed();
		void OnParentTerm();
		void OnMapPressed_();
		void OnStartSavePinInfo_();
		void UpdatePinBox();
		void OnPinnedPinClicked_(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void StartShowErrorMessage(int32_t InMessageTextId);
		void EndShowErrorMessage();
		void BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature(int32_t ButtonId);
		void DoChangeMapTypeSelected(bool IsWorldMap);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId);
		void BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId);
		void OnWarpRequestAccepted_();
		void ResetInputModeToMapWidget();
		void ChangeMouseCursorType(EMapPinType InMapPinType);
		void ResetMouseCursorTypeToDefault();
		void BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature();
		void BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature();
		void OnWarpPointIconPressed_();
		void OnEndSavePinInfo_(bool IsResultSuccess, ESBMapErrorCode ErrorCode);
		void BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature();
		void BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature();
		void OnPinBoxPinIconSelected_(EMapPinType InSelectedPinType);
		void UpdateMarkerPin();
		void ResetMouseCursorTypeToDefaultRequest();
		void BookmarkUpdateRequest();
		void UpdateBookmarkStatusButton();
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnQuestDetailForMapChanged(bool bIsOpen);
		void ExecuteUbergraph_MapWidget(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
