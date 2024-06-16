#pragma once

 

// Package: SBTextKeyIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SBTextKeyIcon.SBTextKeyIcon_C
// 0x00C8 (0x0340 - 0x0278)
class USBTextKeyIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextAction;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         In_Font_Info;                                      // 0x0288(0x0088)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateOperationMode;                             // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangePadSkinType;                               // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateKeyConfig;                                 // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnUpdateOperationMode__DelegateSignature();
	void OnChangePadSkinType__DelegateSignature();
	void OnUpdateKeyConfig__DelegateSignature();
	void ExecuteUbergraph_SBTextKeyIcon(int32 EntryPoint);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UnbindUpdateKeyConfig();
	void BindUpdateKeyConfig();
	void CustomEvent();
	void UnbindConfigSave();
	void BindConfigSave();
	void CustomEvent_5(const ESBPadKeySkinType SkinType);
	void UnbindChangePadSkinType();
	void BindChangePadSkinType();
	void CustomEvent_4();
	void UnbindUpdateOperationMode();
	void BindUpdateOperationMode();
	void SetDisplayTextByKBPad1(ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad, bool* Result);
	void SetDisplayTextByKBPad2(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad);
	void SetDisplayTextByAction(const ESBUIKeyConfigAction KeyConfigAction);
	class FString GetDisplayTextByAction(const ESBUIKeyConfigAction KeyConfigAction);
	void SetDisplayTextByKey(const struct FKey& InKey, const bool bReplaceFunction);
	void SetText(const class FText& InText);
	class FText GetText();

	class FString GetDisplayTextByKey(const struct FKey& Key, const bool bReplaceFunction) const;
	class FText GetActionKeyText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad) const;
	class FText GetActionKeyTextKB(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB) const;
	class FText GetActionKeyTextGamePad(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionPad) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextKeyIcon_C">();
	}
	static class USBTextKeyIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextKeyIcon_C>();
	}
};
static_assert(alignof(USBTextKeyIcon_C) == 0x000008, "Wrong alignment on USBTextKeyIcon_C");
static_assert(sizeof(USBTextKeyIcon_C) == 0x000340, "Wrong size on USBTextKeyIcon_C");
static_assert(offsetof(USBTextKeyIcon_C, UberGraphFrame) == 0x000278, "Member 'USBTextKeyIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USBTextKeyIcon_C, TextAction) == 0x000280, "Member 'USBTextKeyIcon_C::TextAction' has a wrong offset!");
static_assert(offsetof(USBTextKeyIcon_C, In_Font_Info) == 0x000288, "Member 'USBTextKeyIcon_C::In_Font_Info' has a wrong offset!");
static_assert(offsetof(USBTextKeyIcon_C, OnUpdateOperationMode) == 0x000310, "Member 'USBTextKeyIcon_C::OnUpdateOperationMode' has a wrong offset!");
static_assert(offsetof(USBTextKeyIcon_C, OnChangePadSkinType) == 0x000320, "Member 'USBTextKeyIcon_C::OnChangePadSkinType' has a wrong offset!");
static_assert(offsetof(USBTextKeyIcon_C, OnUpdateKeyConfig) == 0x000330, "Member 'USBTextKeyIcon_C::OnUpdateKeyConfig' has a wrong offset!");

}

