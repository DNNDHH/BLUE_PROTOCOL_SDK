#pragma once

 

// Package: DebugMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
// 0x01F0 (0x04A0 - 0x02B0)
class UDebugMenu_C : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CloseButton;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Menu;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MenuItemGroup;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Menu;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_X;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ParentMenu;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            ChildMenu;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MyMenuType;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5197[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ParameterName;                                     // 0x0308(0x0018)(Edit, BlueprintVisible)
	class FText                                   ToolTip;                                           // 0x0320(0x0018)(Edit, BlueprintVisible)
	class FName                                   RowName;                                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDebugParameter                      DebugParameter;                                    // 0x0340(0x00A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         InitialValue;                                      // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedOption;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBDebugMenuType                              ChildMenuType;                                     // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              MenuVisibility;                                    // 0x0402(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WhileLoopCheckFlag;                                // 0x0403(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5198[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            MenuWidget;                                        // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventDispatcher_OnClose;                           // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrFocusId;                                       // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMenuVisibility;                               // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          VisibleSetting;                                    // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5199[0x2];                                     // 0x0426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CameraMove;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCursorStateHandle                   CursorStateHandle;                                 // 0x0430(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_519A[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   ChildWidgetClass;                                  // 0x0438(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 LastPlayDemo;                                      // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   MyMenuName;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 OwnCharacterId;                                    // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         InvitedCnt;                                        // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519B[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASBPlayerState*>                 InvitePlayerStateList;                             // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void EventDispatcher_OnClose__DelegateSignature();
	void ExecuteUbergraph_DebugMenu(int32 EntryPoint);
	void Destruct();
	void ProcVisibleSettingChange(ESBUIType InUIType, const bool bInVisibility, bool bInInstantly);
	void OnRepeat_Down();
	void OnRepeat_Up();
	void OnSetFocusItem(int32 InFocusId);
	void OnPress_Cancel();
	void DebugButton_OnClicked_____(class UDebugButton_C* DebugButton);
	void EventDispatcher_OnClose_Event();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void NotificationLoaded(bool Result);
	void CheatCommand_NotificationMenu(class UObject* InSender, class UObject* InParam);
	void CheatCommand_BulkGetItemSet(class UObject* InSender, class UObject* InParam);
	void ChectCommand_AddMasterItemsMenu(class UObject* InSender, class UObject* InParam);
	void CheatCommand_ResponseChecker(class UObject* InSender, class UObject* InParam);
	void CheatCommand_Party_Create_Invite_Send(class UObject* InSender, class UObject* InParam);
	void CheatCommand_ItemSupplyer(class UObject* InSender, class UObject* InParam);
	void CheatCommand_LevelScriptList(class UObject* InSender, class UObject* InParam);
	void CheatCommand_ScriptExecutor(class UObject* InSender, class UObject* InParam);
	void CheatCommand_RecepiBroker(class UObject* InSender, class UObject* InParam);
	void ChectCommand_BulkGetItemMenu(class UObject* InSender, class UObject* InParam);
	void OnPressOk();
	void OnLostFocus();
	void OnGetFocus();
	void OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8950531E42034202AFA24B8A7E7E2D11(TSubclassOf<class UObject> Loaded);
	void OnLoaded_B6543B2E423821130C7933B54E69A6C5(TSubclassOf<class UObject> Loaded);
	void OnLoaded_27772D90466B1887FF9CA8BA68DDE282(TSubclassOf<class UObject> Loaded);
	void OnLoaded_4F44425143BDF3C769780FB39763FAA8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77(TSubclassOf<class UObject> Loaded);
	void OnLoaded_BCFFDC8A4AF2D3E733074AB599485936(TSubclassOf<class UObject> Loaded);
	void OnLoaded_102A04CB4074E1F46BB26DB6C4891B24(TSubclassOf<class UObject> Loaded);
	void CreateCheckBox();
	void CreateInt32();
	void CreateFloat();
	void CreateString();
	void CreateComboBox();
	void CreateCommand();
	void CreateButton(class UDebugButton_C** OutDebugButton);
	void InputDebugMenuButton();
	void SetDebugMenuVisibility(bool InVisible);
	void ProcFocusCursorMoveUpDown(bool InMoveUp);
	void GetCurrentValue(class FText* CurrentValue, bool* ValueExists);
	void AddChildMenu(class UUserWidget* Param_ChildMenu);
	void SetTitle(const class FText& TitleText);
	void AddMenuItem(class USBUserWidget* Widget);
	void CreateChildButton(class UDebugChildButton_C** OutDebugButton);
	void GetText(class USBTextTableAsset* InTextTableAsset, class FName InTextID, class FName InOldTextId, class FText* OutText);
	void Set_Item_Command(class FName ItemSetName, int32 AllSouko);
	void GetItemStrageNumber(int32 AllSouko, int32 ItemIndex, int32* StorageNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugMenu_C">();
	}
	static class UDebugMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugMenu_C>();
	}
};
static_assert(alignof(UDebugMenu_C) == 0x000008, "Wrong alignment on UDebugMenu_C");
static_assert(sizeof(UDebugMenu_C) == 0x0004A0, "Wrong size on UDebugMenu_C");
static_assert(offsetof(UDebugMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, CloseButton) == 0x0002B8, "Member 'UDebugMenu_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, Image_Menu) == 0x0002C0, "Member 'UDebugMenu_C::Image_Menu' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, MenuItemGroup) == 0x0002C8, "Member 'UDebugMenu_C::MenuItemGroup' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, Overlay_Menu) == 0x0002D0, "Member 'UDebugMenu_C::Overlay_Menu' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, Text_Title) == 0x0002D8, "Member 'UDebugMenu_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, TextBlock_X) == 0x0002E0, "Member 'UDebugMenu_C::TextBlock_X' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, VerticalBox) == 0x0002E8, "Member 'UDebugMenu_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ParentMenu) == 0x0002F0, "Member 'UDebugMenu_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ChildMenu) == 0x0002F8, "Member 'UDebugMenu_C::ChildMenu' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, MyMenuType) == 0x000300, "Member 'UDebugMenu_C::MyMenuType' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ParameterName) == 0x000308, "Member 'UDebugMenu_C::ParameterName' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ToolTip) == 0x000320, "Member 'UDebugMenu_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, RowName) == 0x000338, "Member 'UDebugMenu_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, DebugParameter) == 0x000340, "Member 'UDebugMenu_C::DebugParameter' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, InitialValue) == 0x0003E0, "Member 'UDebugMenu_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, SelectedOption) == 0x0003F0, "Member 'UDebugMenu_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, Enable) == 0x000400, "Member 'UDebugMenu_C::Enable' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ChildMenuType) == 0x000401, "Member 'UDebugMenu_C::ChildMenuType' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, MenuVisibility) == 0x000402, "Member 'UDebugMenu_C::MenuVisibility' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, WhileLoopCheckFlag) == 0x000403, "Member 'UDebugMenu_C::WhileLoopCheckFlag' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, MenuWidget) == 0x000408, "Member 'UDebugMenu_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, EventDispatcher_OnClose) == 0x000410, "Member 'UDebugMenu_C::EventDispatcher_OnClose' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, CurrFocusId) == 0x000420, "Member 'UDebugMenu_C::CurrFocusId' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, DebugMenuVisibility) == 0x000424, "Member 'UDebugMenu_C::DebugMenuVisibility' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, VisibleSetting) == 0x000425, "Member 'UDebugMenu_C::VisibleSetting' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, CameraMove) == 0x000428, "Member 'UDebugMenu_C::CameraMove' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, CursorStateHandle) == 0x000430, "Member 'UDebugMenu_C::CursorStateHandle' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, ChildWidgetClass) == 0x000438, "Member 'UDebugMenu_C::ChildWidgetClass' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, LastPlayDemo) == 0x000460, "Member 'UDebugMenu_C::LastPlayDemo' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, MyMenuName) == 0x000470, "Member 'UDebugMenu_C::MyMenuName' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, OwnCharacterId) == 0x000478, "Member 'UDebugMenu_C::OwnCharacterId' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, InvitedCnt) == 0x000488, "Member 'UDebugMenu_C::InvitedCnt' has a wrong offset!");
static_assert(offsetof(UDebugMenu_C, InvitePlayerStateList) == 0x000490, "Member 'UDebugMenu_C::InvitePlayerStateList' has a wrong offset!");

}

