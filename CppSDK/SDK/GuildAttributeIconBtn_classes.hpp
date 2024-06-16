#pragma once

 

// Package: GuildAttributeIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildAttributeIconBtn.GuildAttributeIconBtn_C
// 0x0538 (0x07B0 - 0x0278)
class UGuildAttributeIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            CB_Check;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgSelected;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchEdit;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EGuildAttribute                               Attribute;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bOnChecked;                                        // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5446[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AttribText;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           StyleNormal;                                       // 0x02C0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           StyleSelected;                                     // 0x0538(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GuildAttributeIconBtn(int32 EntryPoint);
	void BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Set_Ediable(bool IsEnabled);
	void BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize_Attribute();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A(class UObject* Loaded);
	void IsCheck(bool* Param_IsCheck);
	void GetAttrib(EGuildAttribute* Param_Attribute);
	void SetChecked(bool bIsCheck);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildAttributeIconBtn_C">();
	}
	static class UGuildAttributeIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildAttributeIconBtn_C>();
	}
};
static_assert(alignof(UGuildAttributeIconBtn_C) == 0x000008, "Wrong alignment on UGuildAttributeIconBtn_C");
static_assert(sizeof(UGuildAttributeIconBtn_C) == 0x0007B0, "Wrong size on UGuildAttributeIconBtn_C");
static_assert(offsetof(UGuildAttributeIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UGuildAttributeIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, CanvasPanel_0) == 0x000280, "Member 'UGuildAttributeIconBtn_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, CB_Check) == 0x000288, "Member 'UGuildAttributeIconBtn_C::CB_Check' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, Icon) == 0x000290, "Member 'UGuildAttributeIconBtn_C::Icon' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, ImgSelected) == 0x000298, "Member 'UGuildAttributeIconBtn_C::ImgSelected' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, SwitchEdit) == 0x0002A0, "Member 'UGuildAttributeIconBtn_C::SwitchEdit' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, Attribute) == 0x0002A8, "Member 'UGuildAttributeIconBtn_C::Attribute' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, bOnChecked) == 0x0002A9, "Member 'UGuildAttributeIconBtn_C::bOnChecked' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, AttribText) == 0x0002B0, "Member 'UGuildAttributeIconBtn_C::AttribText' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, StyleNormal) == 0x0002C0, "Member 'UGuildAttributeIconBtn_C::StyleNormal' has a wrong offset!");
static_assert(offsetof(UGuildAttributeIconBtn_C, StyleSelected) == 0x000538, "Member 'UGuildAttributeIconBtn_C::StyleSelected' has a wrong offset!");

}

