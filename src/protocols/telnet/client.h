/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef GUAC_TELNET__CLIENT_H
#define GUAC_TELNET__CLIENT_H

#include "config.h"
#include "terminal/terminal.h"

#include <pthread.h>
#include <regex.h>
#include <sys/types.h>

#include <libtelnet.h>

/**
 * Free handler. Required by libguac and called when the guac_client is
 * disconnected and must be cleaned up.
 */
guac_client_free_handler guac_telnet_client_free_handler;

#endif

