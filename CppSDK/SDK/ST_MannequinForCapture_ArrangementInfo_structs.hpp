#pragma once

 

// Package: ST_MannequinForCapture_ArrangementInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_MannequinForCapture_ArrangementInfo.ST_MannequinForCapture_ArrangementInfo
// 0x0018 (0x0018 - 0x0000)
struct FST_MannequinForCapture_ArrangementInfo final
{
public:
	class FString                                 ArrangementDataId_24_B83438D14B21528846394FB2E1B3D970; // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsAnimChange_27_8D6CD0B54DCE8253F45E2C832CD67634;  // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_MannequinForCapture_ArrangementInfo) == 0x000008, "Wrong alignment on FST_MannequinForCapture_ArrangementInfo");
static_assert(sizeof(FST_MannequinForCapture_ArrangementInfo) == 0x000018, "Wrong size on FST_MannequinForCapture_ArrangementInfo");
static_assert(offsetof(FST_MannequinForCapture_ArrangementInfo, ArrangementDataId_24_B83438D14B21528846394FB2E1B3D970) == 0x000000, "Member 'FST_MannequinForCapture_ArrangementInfo::ArrangementDataId_24_B83438D14B21528846394FB2E1B3D970' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_ArrangementInfo, IsAnimChange_27_8D6CD0B54DCE8253F45E2C832CD67634) == 0x000010, "Member 'FST_MannequinForCapture_ArrangementInfo::IsAnimChange_27_8D6CD0B54DCE8253F45E2C832CD67634' has a wrong offset!");

}

