#pragma once

 

// Package: DebugButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugButton.DebugButton_C
// 0x0138 (0x03E8 - 0x02B0)
class UDebugButton_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_DebugButton;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Button;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              MenuType;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514D[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InitialValue;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible)
	class UUserWidget*                            ParentMenu;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 PlayerStartTagName;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventDispatcher_OnClicked;                         // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftClassPtr<class UClass>                   DynamicSkyAsset;                                   // 0x0318(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture>                Cloud14Asset;                                      // 0x0340(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture>                Cloud17Asset;                                      // 0x0368(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   ScriptActorAsset;                                  // 0x0390(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   ChildWidgetClass;                                  // 0x03B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          WidgetRemove;                                      // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventDispatcher_OnClicked__DelegateSignature(class UDebugButton_C* DebugButton);
	void ExecuteUbergraph_DebugButton(int32 EntryPoint);
	void OnPressOk();
	void BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature();
	void ExecFunc();
	void OnLostFocus();
	void OnGetFocus();
	void Construct();
	void PushButton();
	void OnPress_TimeSettingMenuToEvening();
	void OnPress_TimeSettingMenuToNoon();
	void OnPress_FastTravelMenu_ReturnToCity();
	void OnPress_FastTravelMenu_ToTargetPoint();
	void OnPress_SetResolution();
	void OnPress_CommandMenu_WindowMode();
	void OnPress_CommandMenu_FullscreenMode();
	void OnPress_ReplayDemo();
	void OnPress_PlayDemo();
	void OnPressSetPlayerLocation(const class FString& LocationStr);
	void OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9(TSubclassOf<class UObject> Loaded);
	void OnLoaded_495F650B48822E342FF6D9A376B5922E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_445800FD409A4EBB9ABB87B77ED6E644(TSubclassOf<class UObject> Loaded);
	void LoadSettings();
	void SaveSettings();
	void ResetSettings();
	void SetButtonFocus(bool bFocus);
	void GetText(class FText* Text);
	void SetText(const class FText& Text);

	void CalcChildMenuPosition(struct FVector2D* Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugButton_C">();
	}
	static class UDebugButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugButton_C>();
	}
};
static_assert(alignof(UDebugButton_C) == 0x000008, "Wrong alignment on UDebugButton_C");
static_assert(sizeof(UDebugButton_C) == 0x0003E8, "Wrong size on UDebugButton_C");
static_assert(offsetof(UDebugButton_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, Button) == 0x0002B8, "Member 'UDebugButton_C::Button' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, Overlay_DebugButton) == 0x0002C0, "Member 'UDebugButton_C::Overlay_DebugButton' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, TextBlock_Button) == 0x0002C8, "Member 'UDebugButton_C::TextBlock_Button' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, RowName) == 0x0002D0, "Member 'UDebugButton_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, MenuType) == 0x0002D8, "Member 'UDebugButton_C::MenuType' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, InitialValue) == 0x0002E0, "Member 'UDebugButton_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, ParentMenu) == 0x0002F0, "Member 'UDebugButton_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, PlayerStartTagName) == 0x0002F8, "Member 'UDebugButton_C::PlayerStartTagName' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, EventDispatcher_OnClicked) == 0x000308, "Member 'UDebugButton_C::EventDispatcher_OnClicked' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, DynamicSkyAsset) == 0x000318, "Member 'UDebugButton_C::DynamicSkyAsset' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, Cloud14Asset) == 0x000340, "Member 'UDebugButton_C::Cloud14Asset' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, Cloud17Asset) == 0x000368, "Member 'UDebugButton_C::Cloud17Asset' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, ScriptActorAsset) == 0x000390, "Member 'UDebugButton_C::ScriptActorAsset' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, ChildWidgetClass) == 0x0003B8, "Member 'UDebugButton_C::ChildWidgetClass' has a wrong offset!");
static_assert(offsetof(UDebugButton_C, WidgetRemove) == 0x0003E0, "Member 'UDebugButton_C::WidgetRemove' has a wrong offset!");

}

