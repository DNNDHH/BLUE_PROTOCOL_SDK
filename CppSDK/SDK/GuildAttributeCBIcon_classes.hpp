#pragma once

 

// Package: GuildAttributeCBIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildAttributeCBIcon.GuildAttributeCBIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildAttributeCBIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             CB_Check;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Attribute;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EGuildAttribute                               Attribute;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4771[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildAttributeCBIcon(int32 EntryPoint);
	void Initialize_Attribute();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1(class UObject* Loaded);
	void IsCheck(bool* Param_IsCheck);
	void GetAttrib(EGuildAttribute* Param_Attribute);
	void SetChecked(bool bIsCheck);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildAttributeCBIcon_C">();
	}
	static class UGuildAttributeCBIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildAttributeCBIcon_C>();
	}
};
static_assert(alignof(UGuildAttributeCBIcon_C) == 0x000008, "Wrong alignment on UGuildAttributeCBIcon_C");
static_assert(sizeof(UGuildAttributeCBIcon_C) == 0x0002A0, "Wrong size on UGuildAttributeCBIcon_C");
static_assert(offsetof(UGuildAttributeCBIcon_C, UberGraphFrame) == 0x000278, "Member 'UGuildAttributeCBIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildAttributeCBIcon_C, CB_Check) == 0x000280, "Member 'UGuildAttributeCBIcon_C::CB_Check' has a wrong offset!");
static_assert(offsetof(UGuildAttributeCBIcon_C, Icon) == 0x000288, "Member 'UGuildAttributeCBIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UGuildAttributeCBIcon_C, Txt_Attribute) == 0x000290, "Member 'UGuildAttributeCBIcon_C::Txt_Attribute' has a wrong offset!");
static_assert(offsetof(UGuildAttributeCBIcon_C, Attribute) == 0x000298, "Member 'UGuildAttributeCBIcon_C::Attribute' has a wrong offset!");
static_assert(offsetof(UGuildAttributeCBIcon_C, TextId) == 0x00029C, "Member 'UGuildAttributeCBIcon_C::TextId' has a wrong offset!");

}

