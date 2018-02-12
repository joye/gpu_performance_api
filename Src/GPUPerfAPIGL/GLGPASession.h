//==============================================================================
// Copyright (c) 2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief GL GPA Session declaration
//==============================================================================

#ifndef _GL_GPA_SESSION_H_
#define _GL_GPA_SESSION_H_

// GPA Common
#include "GPASession.h"

/// Class for GL GPA Session
class GLGPASession : public GPASession
{
public:

    /// Constructor
    /// \param[in] pParentContext The context Id on which this session is created
    GLGPASession(IGPAContext* pParentContext);

    /// Destructor
    ~GLGPASession();

    /// \copydoc IGPAInterfaceTrait::GetAPIType()
    GPA_API_Type GetAPIType() const override;

private:

    /// \copydoc GPASession::CreateAPIPass()
    GPAPass* CreateAPIPass(PassIndex passIndex) override;
};
#endif // _GL_GPA_SESSION_H_
