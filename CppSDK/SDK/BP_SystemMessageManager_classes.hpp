#pragma once

 

// Package: BP_SystemMessageManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SystemMessageRequestData_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SystemMessageManager.BP_SystemMessageManager_C
// 0x0038 (0x0070 - 0x0038)
class UBP_SystemMessageManager_C final : public USBSystemMessageManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         RequestMax;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E8F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USystemMessage_C*                       SysMsgUI;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSystemMessageRequestData>      SysMsgReqDataList;                                 // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSystemMessageRequestData>      DemoStackList;                                     // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_SystemMessageManager(int32 EntryPoint);
	void CustomEvent_0();
	void OnEndMessage_____();
	void CreateSysMsg(const struct FSystemMessageRequestData& ReqData);
	void ClearSystemMessage();
	void ShowMessage(const class UObject* WorldContextObject, const class FText& Message, const bool IsLowerPosition, const bool bDoNotSkip);
	void EndMessage();
	void ShowGetEmoteMessage(const class UObject* WorldContextObject, const class FName& EmoteId);
	bool IsSystemMessageShowingOrStandby();
	bool GetContentActivateMessage(const TArray<class FName>& ContentId, class FText* Message);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SystemMessageManager_C">();
	}
	static class UBP_SystemMessageManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SystemMessageManager_C>();
	}
};
static_assert(alignof(UBP_SystemMessageManager_C) == 0x000008, "Wrong alignment on UBP_SystemMessageManager_C");
static_assert(sizeof(UBP_SystemMessageManager_C) == 0x000070, "Wrong size on UBP_SystemMessageManager_C");
static_assert(offsetof(UBP_SystemMessageManager_C, UberGraphFrame) == 0x000038, "Member 'UBP_SystemMessageManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SystemMessageManager_C, RequestMax) == 0x000040, "Member 'UBP_SystemMessageManager_C::RequestMax' has a wrong offset!");
static_assert(offsetof(UBP_SystemMessageManager_C, SysMsgUI) == 0x000048, "Member 'UBP_SystemMessageManager_C::SysMsgUI' has a wrong offset!");
static_assert(offsetof(UBP_SystemMessageManager_C, SysMsgReqDataList) == 0x000050, "Member 'UBP_SystemMessageManager_C::SysMsgReqDataList' has a wrong offset!");
static_assert(offsetof(UBP_SystemMessageManager_C, DemoStackList) == 0x000060, "Member 'UBP_SystemMessageManager_C::DemoStackList' has a wrong offset!");

}

