#pragma once

 

// Package: UMG_SeasonPassInfoIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBSeasonPassInfoType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassInfoIcon.UMG_SeasonPassInfoIcon_C
// 0x0038 (0x02B0 - 0x0278)
class UUMG_SeasonPassInfoIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_46;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_SBSeasonPassInfoType                        Type;                                              // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D21[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0290(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   TextId;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_SeasonPassInfoIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassInfoIcon_C">();
	}
	static class UUMG_SeasonPassInfoIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassInfoIcon_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassInfoIcon_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassInfoIcon_C");
static_assert(sizeof(UUMG_SeasonPassInfoIcon_C) == 0x0002B0, "Wrong size on UUMG_SeasonPassInfoIcon_C");
static_assert(offsetof(UUMG_SeasonPassInfoIcon_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassInfoIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassInfoIcon_C, Image_46) == 0x000280, "Member 'UUMG_SeasonPassInfoIcon_C::Image_46' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassInfoIcon_C, Type) == 0x000288, "Member 'UUMG_SeasonPassInfoIcon_C::Type' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassInfoIcon_C, Text) == 0x000290, "Member 'UUMG_SeasonPassInfoIcon_C::Text' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassInfoIcon_C, TextId) == 0x0002A8, "Member 'UUMG_SeasonPassInfoIcon_C::TextId' has a wrong offset!");

}

